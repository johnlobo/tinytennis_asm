.module tools

.area _DATA

factor: .db #3

.area _CODE

;;
;;  multiply
;;
;;  input: A: Multiplicand
;;         B: Multiplier
;;  output: A: result
;;  destroys: A, BC
;; 

multiply::
    dec b
    ld c,a
loop:
    add c
    djnz loop
    ret


;===================================
; Divide
;===================================
;
;Inputs:
;    A=divisor
;    C=dividend
;
;Outputs:
;    B=A/C
;    A=A%C    (the remainder)
;

divide::
 ld b,#0
divLoop:
 sub A,C
 jr c,divEnd
 inc B
 jr divLoop

divEnd:
 add a,c
 ret