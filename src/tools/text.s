.module text

.area _DATA

pvideomem: .dw #0xC000  ;; First byte of video memory
font_W:: .db #3
font_H:: .db #11
str_len: .db #0
aux: .db #0
xpos: .db #0
ypos: .db #0
string: .dw #0000
posvmem: .dw #0000

.globl _g_fonts_big_00 
.globl _g_fonts_big_01 
.globl _g_fonts_big_02 
.globl _g_fonts_big_03 
.globl _g_fonts_big_04
.globl _g_fonts_big_05 
.globl _g_fonts_big_06 
.globl _g_fonts_big_07 
.globl _g_fonts_big_08 
.globl _g_fonts_big_09
.globl _g_fonts_big_10 
.globl _g_fonts_big_11 
.globl _g_fonts_big_12 
.globl _g_fonts_big_13 
.globl _g_fonts_big_14
.globl _g_fonts_big_15 
.globl _g_fonts_big_16 
.globl _g_fonts_big_17 
.globl _g_fonts_big_18 
.globl _g_fonts_big_19
.globl _g_fonts_big_20 
.globl _g_fonts_big_21 
.globl _g_fonts_big_22 
.globl _g_fonts_big_23 
.globl _g_fonts_big_24
.globl _g_fonts_big_25 
.globl _g_fonts_big_26 
.globl _g_fonts_big_27 
.globl _g_fonts_big_28 
.globl _g_fonts_big_29
.globl _g_fonts_big_30 
.globl _g_fonts_big_31 
.globl _g_fonts_big_32

.globl _g_numbers_big_00 
.globl _g_numbers_big_01 
.globl _g_numbers_big_02 
.globl _g_numbers_big_03 
.globl _g_numbers_big_04
.globl _g_numbers_big_05 
.globl _g_numbers_big_06 
.globl _g_numbers_big_07 
.globl _g_numbers_big_08
.globl _g_numbers_big_09
.globl _g_numbers_big_10 
.globl _g_numbers_big_11 
.globl _g_numbers_big_12

font:   .dw _g_fonts_big_00, _g_fonts_big_01, _g_fonts_big_02, _g_fonts_big_03, _g_fonts_big_04
        .dw _g_fonts_big_05, _g_fonts_big_06, _g_fonts_big_07, _g_fonts_big_08, _g_fonts_big_09
        .dw _g_fonts_big_10, _g_fonts_big_11, _g_fonts_big_12, _g_fonts_big_13, _g_fonts_big_14
        .dw _g_fonts_big_15, _g_fonts_big_16, _g_fonts_big_17, _g_fonts_big_18, _g_fonts_big_19
        .dw _g_fonts_big_20, _g_fonts_big_21, _g_fonts_big_22, _g_fonts_big_23, _g_fonts_big_24
        .dw _g_fonts_big_25, _g_fonts_big_26, _g_fonts_big_27, _g_fonts_big_28, _g_fonts_big_29
        .dw _g_fonts_big_30, _g_fonts_big_31, _g_fonts_big_32

numbers:    .dw _g_numbers_big_00, _g_numbers_big_01, _g_numbers_big_02, _g_numbers_big_03, _g_numbers_big_04
            .dw _g_numbers_big_05, _g_numbers_big_06, _g_numbers_big_07, _g_numbers_big_08, _g_numbers_big_09
            .dw _g_numbers_big_10, _g_numbers_big_11, _g_numbers_big_12

.area _CODE

;; Include macros to easily manage undocumented opcodes
.include "macros/cpct_undocumentedOpcodes.s"

.globl multiply
.globl divide
.globl cpct_getScreenPtr_asm
.globl cpct_drawSpriteMaskedAlignedTable_asm

;;
;;  str_length: Count the number of characters in a string
;;
;;  input:
;;      HL: Address for the string to count
;;  output:
;;      A: Number of characters
;;  destroys: A, HL
;;

str_length::
    ld c,#0           ;; initialize the character counter
loop_sl:
    ld a, (hl)      ;; load in A the following character to be counted
    or a            ;; check if A is equal to 0
    jr z, exit_sl   ;; if it is 0 the jump
    inc hl          ;; increment the index on the characters string 
    inc c           ;; increment the couner of characters
    jr loop_sl      ;; go back to the beginning of the loop 
exit_sl:    
    ld a, c         ;; load A with the result of the counting
    ret
    
;;
;;  draw_text: Shows a string on the screen 
;;
;;  input:
;;      HL: Address for the string to show
;;      B:  X Position of the screen 
;;      C:  Y Position of the screen
;;      A:  String should be centered on the line
;;  output:
;;  destroys: A, HL, BC    
;; 

draw_text::
    push af
    ld a, b
    ld (xpos), a        ;; Store xpos for later use
    ld a, c
    ld (ypos), a        ;; Store ypos for later use
    ld a, h
    ld (string), a
    ld a, l
    ld (string + 1), a  ;; Store string for later use
    pop af
    or a
    jr z, not_centered  ;; Jump if string should not be centered
    call str_length     ;; Calculate the length of the string
    ld (str_len),a
    ;; xPos = 39 - (x / 2) * FONT_W;
    srl a               ;; x/2
    ld (str_len),a      ;; store the middle value in an aux variable
    ld a, (font_W)
    ld b,a
    ld a,(str_len);; 
    call multiply       ;; (x/2) * FONT_W
    sub #39             ;;
    neg                 ;; 39 - (x / 2) * FONT_W;
    ld (xpos),a
not_centered:
    ld a, (xpos)
    ld c, a             ;; Load x variable in the c register
    ld a, (ypos)
    ld b, a             ;; Load x variable in the c register
    ;; Calculate a location for printing a string
    ld   de, (pvideomem) ;;DE = Pointer to start of the screen
    call cpct_getScreenPtr_asm ;; Calculate video memory location and return it in HL
    ld (posvmem), hl
loop_dt: 
    ld hl, #string
    ld a, (hl)          ;; read current character
    ;; check if character is a number
    cp #48              ;; Check if the current character is bigger or equal than 48 
    jp m, check_space   ;; jump if character is over 47
    cp #58
    jp m, end_loop_dt   ;; check if character is under 57
    ;; print charater
    ;; cpct_drawSpriteMaskedAlignedTable(numbers[character - 48], pvideo, FONT_W, FONT_H, g_tablatrans);
    ld hl, #font
    ld b, a             ;; Preserve the current character to make the calculation
    sub #48             
    ld c, a
    ld a, b
    ld b, #0
    add hl, bc     ;; calcularions for obtaining the sprite address
    ld c,(hl) 
    inc hl          ;; storing the sprite address wich is store in the array
    ld b,(hl)  
    ld hl, (posvmem)
    ex de, hl
    ld ix, (xpos)   ;; Load xpos on IX
    
    call cpct_drawSpriteMaskedAlignedTable_asm
    jr end_loop_dt
check_space:
    cp #32
    jr nz, end_loop_dt
end_loop_dt:
    inc hl
    jr loop_dt
    ret