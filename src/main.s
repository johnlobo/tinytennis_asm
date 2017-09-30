;;-----------------------------LICENSE NOTICE------------------------------------
;;  This file is part of CPCtelera: An Amstrad CPC Game Engine 
;;  Copyright (C) 2015 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
;;
;;  This program is free software: you can redistribute it and/or modify
;;  it under the terms of the GNU Lesser General Public License as published by
;;  the Free Software Foundation, either version 3 of the License, or
;;  (at your option) any later version.
;;
;;  This program is distributed in the hope that it will be useful,
;;  but WITHOUT ANY WARRANTY; without even the implied warranty of
;;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;;  GNU Lesser General Public License for more details.
;;
;;  You should have received a copy of the GNU Lesser General Public License
;;  along with this program.  If not, see <http://www.gnu.org/licenses/>.
;;-------------------------------------------------------------------------------


;;
;; Start of _DATA area
;;    (SDCC requires at least _DATA and _CODE areas to be declared. )
;;
.area _DATA

;; Start of _CODE area
;; 
.area _CODE

;; Symbols with the names of the CPCtelera functions we want to use
;; must be declared globl to be recognized by the compiler. Later on,
;; linker will do its job and make the calls go to function code.
.include "cpctelera.h"
.include "keyboard/keyboard.s"
.include "tools/text.h"
.include "tools/keyboard.h"
.include "tools/tools.h"
.include "sprites/sprites.h"
.include "defines.h"

interruption: .db 0x00  ;; Store the index to current interruption [0..5]

keys:   .db Key_CursorUp, Key_CursorDown, Key_CursorLeft, Key_CursorRight    ;; Keys for the game
        .db Key_Space, Key_Return, Key_Esc, Key_H, Key_M

;;
;;  New Interrupt Handler 
;;
new_interrupt_handler::
    ld a, (interruption)    ;; Read the index to the number of interruptions
    inc a                   ;; Increment the index
    cp #4                   ;; If it's 4 then read de keyboard
    jr z, keyboard_scan 
    cp #6                   ;; else if it's 6 
    jr nz, return_ih        ;; Return from the funtion
    xor a                   ;; Reset a to 0
keyboard_scan:
    push af
    call cpct_scanKeyboard_if_asm   ;; call to read the status of the keyboard
    pop af
return_ih:
    ld (interruption),a     ;; Store the new value of interruption
    ret


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;  FUNC: initGame
;;      Game Loop Initialization
;; 
;;  INPUT: Nothing
;;    
;;  OUTPUT: Nothing
;;  
;;  DESTROYS:
;;      A, B, HL, DE 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
initGame::
    call clear_screen

    ret

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;  FUNC: Game
;;      Game Loop
;; 
;;  INPUT: Nothing
;;    
;;  OUTPUT: Nothing
;;  
;;  DESTROYS:
;;      A, B, HL, DE 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

message: .asciz "PRESS ANY KEY"

game::

    ;;drawText("PRESS ANY KEY", 0, 90, 1);   
    
    ld hl, #message        ;; Pointer to string
    ld b,#0                ;; pox
    ld c,#90               ;; posy
    ld a,#1                ;; not centered
    call draw_text         ;; Shows a string on the screen

    
    ;;cpct_srand8(wait4UserKeypress())
    call wait4UserKeypress          ;; Wait for keypress and return in DE,HL the number of cycles waited
    call cpct_setSeed_mxor_asm      ;; set the seed for random generation based on DE,HL
    
    call initGame                   ;; Game initialization
    
    forever:
    jp forever        ;; Infinite waiting loop

    ret

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; FUNC: initialize
;;    Sets CPC to its initial status
;; DESTROYS:
;;   AF, BC, DE, HL
;;

initialize::
   ;; Disable Firmware
    call  cpct_disableFirmware_asm   ;; Disable firmware
   
   ;; Set new interrupt handler to manage key strokes, music, timers, etc...
    ld hl, #new_interrupt_handler        ;; HL = Pointer to the new interrupt handler
    call cpct_setInterruptHandler_asm    ;; Set new interrupt handler

   ;; Set Mode 1
    ld    c, #0                      ;; C = 0 (New video mode)
    call  cpct_setVideoMode_asm      ;; Set Mode 1
   
   ;; Set Palette
    ld    hl, #_sp_palette            ;; HL = pointer to the start of the palette array
    ld    de, #palete_size           ;; DE = Size of the palette array (num of colours)
    call  cpct_setPalette_asm        ;; Set the new palette

   ;; Change border colour
    ;;ld    hl, #border_colour         ;; L=Border colour value, H=Palette Colour to be set (Border=16)
    ;;call  cpct_setPALColour_asm      ;; Set the border (colour 16)

    ret                              ;; return

;;
;; MAIN function. This is the entry point of the application.
;;    _main:: global symbol is required for correctly compiling and linking
;;
_main::

    ;; Move stack location
    ld hl, #0xC000   ;; HL = pointer to new stack location
    call cpct_setStackLocation_asm
   
    ;; Call to the main inittialization
    call initialize
   
    call game
