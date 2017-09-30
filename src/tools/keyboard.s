.module tools

.area _DATA

.area _CODE

.include "../cpctelera.h"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;  FUNC: wait4UserKeyPress
;;      Waits until any key is pressed, returing the number of loops waited
;; 
;;  INPUT: Nothing
;;    
;;  OUTPUT: in DE,HL number of cycles waited
;;  
;;  DESTROYS:
;;      A, B, HL, DE 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

wait4UserKeypress::
    ld	hl,#0x0000                          ;; Initizalize HL and DE to 0  
	ld	e,l                                 ;;      
	ld	d,h                                 ;;
loop:
    inc	l                                   ;; Increment HL and DE
	jr	NZ,wait4key                         ;;  
	inc	h                                   ;;
	jr	NZ,wait4key                         ;;
	inc	e                                   ;;
	jr	NZ,wait4key                         ;;
	inc	d                                   ;;
wait4key:
    push	hl                              ;; preserves HL
	push	de                              ;; preserves DE
	call	cpct_isAnyKeyPressed_f_asm      ;; Read the keyboard
	pop	de                                  ;; restore DE
	pop	hl                                  ;; restore HL
	or	a                                   ;; check if A is 0
	jr	Z, loop                             ;; jump to loop if A is 0
	ret
    