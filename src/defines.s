;;
;; Start of _DATA area
;;    (SDCC requires at least _DATA and _CODE areas to be declared. )
;;
.area _DATA

;;===============================================================================
;; DEFINED CONSTANTS
;;===============================================================================

screen_W        = 80             ;; Width of the screen in bytes
palete_size     = 4              ;; Number of total palette colours
border_colour   = 0x0010         ;; 0x10 (Border ID), 0x00 (Colour to set: White).
sprite_end_x    = 75             ;; x coordinate where sprite will bounce to the left
font_W          = 3
font_H          = 11

