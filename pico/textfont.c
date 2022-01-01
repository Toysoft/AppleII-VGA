#include "textfont.h"


const uint8_t default_character_rom[256*8] = {
    //
    // Inverse Set (0-63)
    //

    // Inverse '@'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00101010,
    0b00101110,
    0b00101100,
    0b00100000,
    0b00011110,

    // Inverse 'A'
    0b00000000,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00100010,
    0b00111110,
    0b00100010,
    0b00100010,

    // Inverse 'B'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,

    // Inverse 'C'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100010,
    0b00011100,

    // Inverse 'D'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00111100,

    // Inverse 'E'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00100000,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00111110,

    // Inverse 'F'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00100000,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00100000,

    // Inverse 'G'
    0b00000000,
    0b00011110,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100110,
    0b00100010,
    0b00011110,

    // Inverse 'H'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00111110,
    0b00100010,
    0b00100010,
    0b00100010,

    // Inverse 'I'
    0b00000000,
    0b00011100,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00011100,

    // Inverse 'J'
    0b00000000,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00100010,
    0b00011100,

    // Inverse 'K'
    0b00000000,
    0b00100010,
    0b00100100,
    0b00101000,
    0b00110000,
    0b00101000,
    0b00100100,
    0b00100010,

    // Inverse 'L'
    0b00000000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00111110,

    // Inverse 'M'
    0b00000000,
    0b00100010,
    0b00110110,
    0b00101010,
    0b00101010,
    0b00100010,
    0b00100010,
    0b00100010,

    // Inverse 'N'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00110010,
    0b00101010,
    0b00100110,
    0b00100010,
    0b00100010,

    // Inverse 'O'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00011100,

    // Inverse 'P'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00100000,

    // Inverse 'Q'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00101010,
    0b00100100,
    0b00011010,

    // Inverse 'R'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00101000,
    0b00100100,
    0b00100010,

    // Inverse 'S'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100000,
    0b00011100,
    0b00000010,
    0b00100010,
    0b00011100,

    // Inverse 'T'
    0b00000000,
    0b00111110,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,

    // Inverse 'U'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00011100,

    // Inverse 'V'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,

    // Inverse 'W'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00101010,
    0b00101010,
    0b00110110,
    0b00100010,

    // Inverse 'X'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00100010,

    // Inverse 'Y'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,

    // Inverse 'Z'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00111110,

    // Inverse '['
    0b00000000,
    0b00111110,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00111110,

    // Inverse '\'
    0b00000000,
    0b00000000,
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000000,

    // Inverse ']'
    0b00000000,
    0b00111110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00111110,

    // Inverse '^'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00000000,
    0b00000000,

    // Inverse '_'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,

    // Inverse ' '
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Inverse '!'
    0b00000000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00001000,

    // Inverse '"'
    0b00000000,
    0b00010100,
    0b00010100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Inverse '#'
    0b00000000,
    0b00010100,
    0b00010100,
    0b00111110,
    0b00010100,
    0b00111110,
    0b00010100,
    0b00010100,

    // Inverse '$'
    0b00000000,
    0b00001000,
    0b00011110,
    0b00101000,
    0b00011100,
    0b00001010,
    0b00111100,
    0b00001000,

    // Inverse '%'
    0b00000000,
    0b00110000,
    0b00110010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100110,
    0b00000110,

    // Inverse '&'
    0b00000000,
    0b00010000,
    0b00101000,
    0b00101000,
    0b00010000,
    0b00101010,
    0b00100100,
    0b00011010,

    // Inverse '''
    0b00000000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Inverse '('
    0b00000000,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00010000,
    0b00001000,

    // Inverse ')'
    0b00000000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000100,
    0b00001000,

    // Inverse '*'
    0b00000000,
    0b00001000,
    0b00101010,
    0b00011100,
    0b00001000,
    0b00011100,
    0b00101010,
    0b00001000,

    // Inverse '+'
    0b00000000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00111110,
    0b00001000,
    0b00001000,
    0b00000000,

    // Inverse ','
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00010000,

    // Inverse '-'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,

    // Inverse '.'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,

    // Inverse '/'
    0b00000000,
    0b00000000,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00000000,

    // Inverse '0'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100110,
    0b00101010,
    0b00110010,
    0b00100010,
    0b00011100,

    // Inverse '1'
    0b00000000,
    0b00001000,
    0b00011000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00011100,

    // Inverse '2'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00000010,
    0b00001100,
    0b00010000,
    0b00100000,
    0b00111110,

    // Inverse '3'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001100,
    0b00000010,
    0b00100010,
    0b00011110,

    // Inverse '4'
    0b00000000,
    0b00000100,
    0b00001100,
    0b00010100,
    0b00100100,
    0b00111110,
    0b00000100,
    0b00000100,

    // Inverse '5'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00111100,
    0b00000010,
    0b00000010,
    0b00100010,
    0b00011100,

    // Inverse '6'
    0b00000000,
    0b00001110,
    0b00010000,
    0b00100000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00011100,

    // Inverse '7'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00010000,
    0b00010000,

    // Inverse '8'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011100,

    // Inverse '9'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011110,
    0b00000010,
    0b00000100,
    0b00111000,

    // Inverse ':'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00000000,

    // Inverse ';'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00010000,

    // Inverse '<'
    0b00000000,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,

    // Inverse '='
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00000000,

    // Inverse '>'
    0b00000000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,

    // Inverse '?'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00000100,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00001000,

    //
    // Flashing Set (64-127)
    //

    // Flashing '@'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10101010,
    0b10101110,
    0b10101100,
    0b10100000,
    0b10011110,

    // Flashing 'A'
    0b10000000,
    0b10001000,
    0b10010100,
    0b10100010,
    0b10100010,
    0b10111110,
    0b10100010,
    0b10100010,

    // Flashing 'B'
    0b10000000,
    0b10111100,
    0b10100010,
    0b10100010,
    0b10111100,
    0b10100010,
    0b10100010,
    0b10111100,

    // Flashing 'C'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10100000,
    0b10100000,
    0b10100000,
    0b10100010,
    0b10011100,

    // Flashing 'D'
    0b10000000,
    0b10111100,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10111100,

    // Flashing 'E'
    0b10000000,
    0b10111110,
    0b10100000,
    0b10100000,
    0b10111100,
    0b10100000,
    0b10100000,
    0b10111110,

    // Flashing 'F'
    0b10000000,
    0b10111110,
    0b10100000,
    0b10100000,
    0b10111100,
    0b10100000,
    0b10100000,
    0b10100000,

    // Flashing 'G'
    0b10000000,
    0b10011110,
    0b10100000,
    0b10100000,
    0b10100000,
    0b10100110,
    0b10100010,
    0b10011110,

    // Flashing 'H'
    0b10000000,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10111110,
    0b10100010,
    0b10100010,
    0b10100010,

    // Flashing 'I'
    0b10000000,
    0b10011100,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10011100,

    // Flashing 'J'
    0b10000000,
    0b10000010,
    0b10000010,
    0b10000010,
    0b10000010,
    0b10000010,
    0b10100010,
    0b10011100,

    // Flashing 'K'
    0b10000000,
    0b10100010,
    0b10100100,
    0b10101000,
    0b10110000,
    0b10101000,
    0b10100100,
    0b10100010,

    // Flashing 'L'
    0b10000000,
    0b10100000,
    0b10100000,
    0b10100000,
    0b10100000,
    0b10100000,
    0b10100000,
    0b10111110,

    // Flashing 'M'
    0b10000000,
    0b10100010,
    0b10110110,
    0b10101010,
    0b10101010,
    0b10100010,
    0b10100010,
    0b10100010,

    // Flashing 'N'
    0b10000000,
    0b10100010,
    0b10100010,
    0b10110010,
    0b10101010,
    0b10100110,
    0b10100010,
    0b10100010,

    // Flashing 'O'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10011100,

    // Flashing 'P'
    0b10000000,
    0b10111100,
    0b10100010,
    0b10100010,
    0b10111100,
    0b10100000,
    0b10100000,
    0b10100000,

    // Flashing 'Q'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10101010,
    0b10100100,
    0b10011010,

    // Flashing 'R'
    0b10000000,
    0b10111100,
    0b10100010,
    0b10100010,
    0b10111100,
    0b10101000,
    0b10100100,
    0b10100010,

    // Flashing 'S'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10100000,
    0b10011100,
    0b10000010,
    0b10100010,
    0b10011100,

    // Flashing 'T'
    0b10000000,
    0b10111110,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,

    // Flashing 'U'
    0b10000000,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10011100,

    // Flashing 'V'
    0b10000000,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10010100,
    0b10001000,

    // Flashing 'W'
    0b10000000,
    0b10100010,
    0b10100010,
    0b10100010,
    0b10101010,
    0b10101010,
    0b10110110,
    0b10100010,

    // Flashing 'X'
    0b10000000,
    0b10100010,
    0b10100010,
    0b10010100,
    0b10001000,
    0b10010100,
    0b10100010,
    0b10100010,

    // Flashing 'Y'
    0b10000000,
    0b10100010,
    0b10100010,
    0b10010100,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,

    // Flashing 'Z'
    0b10000000,
    0b10111110,
    0b10000010,
    0b10000100,
    0b10001000,
    0b10010000,
    0b10100000,
    0b10111110,

    // Flashing '['
    0b10000000,
    0b10111110,
    0b10110000,
    0b10110000,
    0b10110000,
    0b10110000,
    0b10110000,
    0b10111110,

    // Flashing '\'
    0b10000000,
    0b10000000,
    0b10100000,
    0b10010000,
    0b10001000,
    0b10000100,
    0b10000010,
    0b10000000,

    // Flashing ']'
    0b10000000,
    0b10111110,
    0b10000110,
    0b10000110,
    0b10000110,
    0b10000110,
    0b10000110,
    0b10111110,

    // Flashing '^'
    0b10000000,
    0b10000000,
    0b10000000,
    0b10001000,
    0b10010100,
    0b10100010,
    0b10000000,
    0b10000000,

    // Flashing '_'
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10111110,

    // Flashing ' '
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,

    // Flashing '!'
    0b10000000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10000000,
    0b10001000,

    // Flashing '"'
    0b10000000,
    0b10010100,
    0b10010100,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,

    // Flashing '#'
    0b10000000,
    0b10010100,
    0b10010100,
    0b10111110,
    0b10010100,
    0b10111110,
    0b10010100,
    0b10010100,

    // Flashing '$'
    0b10000000,
    0b10001000,
    0b10011110,
    0b10101000,
    0b10011100,
    0b10001010,
    0b10111100,
    0b10001000,

    // Flashing '%'
    0b10000000,
    0b10110000,
    0b10110010,
    0b10000100,
    0b10001000,
    0b10010000,
    0b10100110,
    0b10000110,

    // Flashing '&'
    0b10000000,
    0b10010000,
    0b10101000,
    0b10101000,
    0b10010000,
    0b10101010,
    0b10100100,
    0b10011010,

    // Flashing '''
    0b10000000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,

    // Flashing '('
    0b10000000,
    0b10001000,
    0b10010000,
    0b10100000,
    0b10100000,
    0b10100000,
    0b10010000,
    0b10001000,

    // Flashing ')'
    0b10000000,
    0b10001000,
    0b10000100,
    0b10000010,
    0b10000010,
    0b10000010,
    0b10000100,
    0b10001000,

    // Flashing '*'
    0b10000000,
    0b10001000,
    0b10101010,
    0b10011100,
    0b10001000,
    0b10011100,
    0b10101010,
    0b10001000,

    // Flashing '+'
    0b10000000,
    0b10000000,
    0b10001000,
    0b10001000,
    0b10111110,
    0b10001000,
    0b10001000,
    0b10000000,

    // Flashing ','
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10001000,
    0b10001000,
    0b10010000,

    // Flashing '-'
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10111110,
    0b10000000,
    0b10000000,
    0b10000000,

    // Flashing '.'
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10001000,

    // Flashing '/'
    0b10000000,
    0b10000000,
    0b10000010,
    0b10000100,
    0b10001000,
    0b10010000,
    0b10100000,
    0b10000000,

    // Flashing '0'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10100110,
    0b10101010,
    0b10110010,
    0b10100010,
    0b10011100,

    // Flashing '1'
    0b10000000,
    0b10001000,
    0b10011000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10001000,
    0b10011100,

    // Flashing '2'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10000010,
    0b10001100,
    0b10010000,
    0b10100000,
    0b10111110,

    // Flashing '3'
    0b10000000,
    0b10111110,
    0b10000010,
    0b10000100,
    0b10001100,
    0b10000010,
    0b10100010,
    0b10011110,

    // Flashing '4'
    0b10000000,
    0b10000100,
    0b10001100,
    0b10010100,
    0b10100100,
    0b10111110,
    0b10000100,
    0b10000100,

    // Flashing '5'
    0b10000000,
    0b10111110,
    0b10100000,
    0b10111100,
    0b10000010,
    0b10000010,
    0b10100010,
    0b10011100,

    // Flashing '6'
    0b10000000,
    0b10001110,
    0b10010000,
    0b10100000,
    0b10111100,
    0b10100010,
    0b10100010,
    0b10011100,

    // Flashing '7'
    0b10000000,
    0b10111110,
    0b10000010,
    0b10000100,
    0b10001000,
    0b10010000,
    0b10010000,
    0b10010000,

    // Flashing '8'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10100010,
    0b10011100,
    0b10100010,
    0b10100010,
    0b10011100,

    // Flashing '9'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10100010,
    0b10011110,
    0b10000010,
    0b10000100,
    0b10111000,

    // Flashing ':'
    0b10000000,
    0b10000000,
    0b10000000,
    0b10001000,
    0b10000000,
    0b10001000,
    0b10000000,
    0b10000000,

    // Flashing ';'
    0b10000000,
    0b10000000,
    0b10000000,
    0b10001000,
    0b10000000,
    0b10001000,
    0b10001000,
    0b10010000,

    // Flashing '<'
    0b10000000,
    0b10000100,
    0b10001000,
    0b10010000,
    0b10100000,
    0b10010000,
    0b10001000,
    0b10000100,

    // Flashing '='
    0b10000000,
    0b10000000,
    0b10000000,
    0b10111110,
    0b10000000,
    0b10111110,
    0b10000000,
    0b10000000,

    // Flashing '>'
    0b10000000,
    0b10010000,
    0b10001000,
    0b10000100,
    0b10000010,
    0b10000100,
    0b10001000,
    0b10010000,

    // Flashing '?'
    0b10000000,
    0b10011100,
    0b10100010,
    0b10000100,
    0b10001000,
    0b10001000,
    0b10000000,
    0b10001000,

    //
    // Normal Set (128-255)
    //

    // Normal '@'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00101010,
    0b00101110,
    0b00101100,
    0b00100000,
    0b00011110,

    // Normal 'A'
    0b00000000,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00100010,
    0b00111110,
    0b00100010,
    0b00100010,

    // Normal 'B'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,

    // Normal 'C'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100010,
    0b00011100,

    // Normal 'D'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00111100,

    // Normal 'E'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00100000,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00111110,

    // Normal 'F'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00100000,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00100000,

    // Normal 'G'
    0b00000000,
    0b00011110,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100110,
    0b00100010,
    0b00011110,

    // Normal 'H'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00111110,
    0b00100010,
    0b00100010,
    0b00100010,

    // Normal 'I'
    0b00000000,
    0b00011100,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00011100,

    // Normal 'J'
    0b00000000,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00100010,
    0b00011100,

    // Normal 'K'
    0b00000000,
    0b00100010,
    0b00100100,
    0b00101000,
    0b00110000,
    0b00101000,
    0b00100100,
    0b00100010,

    // Normal 'L'
    0b00000000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00111110,

    // Normal 'M'
    0b00000000,
    0b00100010,
    0b00110110,
    0b00101010,
    0b00101010,
    0b00100010,
    0b00100010,
    0b00100010,

    // Normal 'N'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00110010,
    0b00101010,
    0b00100110,
    0b00100010,
    0b00100010,

    // Normal 'O'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00011100,

    // Normal 'P'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00100000,

    // Normal 'Q'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00101010,
    0b00100100,
    0b00011010,

    // Normal 'R'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00101000,
    0b00100100,
    0b00100010,

    // Normal 'S'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100000,
    0b00011100,
    0b00000010,
    0b00100010,
    0b00011100,

    // Normal 'T'
    0b00000000,
    0b00111110,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,

    // Normal 'U'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00011100,

    // Normal 'V'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,

    // Normal 'W'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00101010,
    0b00101010,
    0b00110110,
    0b00100010,

    // Normal 'X'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00100010,

    // Normal 'Y'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,

    // Normal 'Z'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00111110,

    // Normal '['
    0b00000000,
    0b00111110,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00111110,

    // Normal '\'
    0b00000000,
    0b00000000,
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000000,

    // Normal ']'
    0b00000000,
    0b00111110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00111110,

    // Normal '^'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00000000,
    0b00000000,

    // Normal '_'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,

    // Normal ' '
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Normal '!'
    0b00000000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00001000,

    // Normal '"'
    0b00000000,
    0b00010100,
    0b00010100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Normal '#'
    0b00000000,
    0b00010100,
    0b00010100,
    0b00111110,
    0b00010100,
    0b00111110,
    0b00010100,
    0b00010100,

    // Normal '$'
    0b00000000,
    0b00001000,
    0b00011110,
    0b00101000,
    0b00011100,
    0b00001010,
    0b00111100,
    0b00001000,

    // Normal '%'
    0b00000000,
    0b00110000,
    0b00110010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100110,
    0b00000110,

    // Normal '&'
    0b00000000,
    0b00010000,
    0b00101000,
    0b00101000,
    0b00010000,
    0b00101010,
    0b00100100,
    0b00011010,

    // Normal '''
    0b00000000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Normal '('
    0b00000000,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00010000,
    0b00001000,

    // Normal ')'
    0b00000000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000100,
    0b00001000,

    // Normal '*'
    0b00000000,
    0b00001000,
    0b00101010,
    0b00011100,
    0b00001000,
    0b00011100,
    0b00101010,
    0b00001000,

    // Normal '+'
    0b00000000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00111110,
    0b00001000,
    0b00001000,
    0b00000000,

    // Normal ','
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00010000,

    // Normal '-'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,

    // Normal '.'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,

    // Normal '/'
    0b00000000,
    0b00000000,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00000000,

    // Normal '0'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100110,
    0b00101010,
    0b00110010,
    0b00100010,
    0b00011100,

    // Normal '1'
    0b00000000,
    0b00001000,
    0b00011000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00011100,

    // Normal '2'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00000010,
    0b00001100,
    0b00010000,
    0b00100000,
    0b00111110,

    // Normal '3'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001100,
    0b00000010,
    0b00100010,
    0b00011110,

    // Normal '4'
    0b00000000,
    0b00000100,
    0b00001100,
    0b00010100,
    0b00100100,
    0b00111110,
    0b00000100,
    0b00000100,

    // Normal '5'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00111100,
    0b00000010,
    0b00000010,
    0b00100010,
    0b00011100,

    // Normal '6'
    0b00000000,
    0b00001110,
    0b00010000,
    0b00100000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00011100,

    // Normal '7'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00010000,
    0b00010000,

    // Normal '8'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011100,

    // Normal '9'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011110,
    0b00000010,
    0b00000100,
    0b00111000,

    // Normal ':'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00000000,

    // Normal ';'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00010000,

    // Normal '<'
    0b00000000,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,

    // Normal '='
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00000000,

    // Normal '>'
    0b00000000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,

    // Normal '?'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00000100,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00001000,

    // Normal '@'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00101010,
    0b00101110,
    0b00101100,
    0b00100000,
    0b00011110,

    // Normal 'A'
    0b00000000,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00100010,
    0b00111110,
    0b00100010,
    0b00100010,

    // Normal 'B'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,

    // Normal 'C'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100010,
    0b00011100,

    // Normal 'D'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00111100,

    // Normal 'E'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00100000,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00111110,

    // Normal 'F'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00100000,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00100000,

    // Normal 'G'
    0b00000000,
    0b00011110,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100110,
    0b00100010,
    0b00011110,

    // Normal 'H'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00111110,
    0b00100010,
    0b00100010,
    0b00100010,

    // Normal 'I'
    0b00000000,
    0b00011100,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00011100,

    // Normal 'J'
    0b00000000,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00100010,
    0b00011100,

    // Normal 'K'
    0b00000000,
    0b00100010,
    0b00100100,
    0b00101000,
    0b00110000,
    0b00101000,
    0b00100100,
    0b00100010,

    // Normal 'L'
    0b00000000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00111110,

    // Normal 'M'
    0b00000000,
    0b00100010,
    0b00110110,
    0b00101010,
    0b00101010,
    0b00100010,
    0b00100010,
    0b00100010,

    // Normal 'N'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00110010,
    0b00101010,
    0b00100110,
    0b00100010,
    0b00100010,

    // Normal 'O'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00011100,

    // Normal 'P'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00100000,
    0b00100000,
    0b00100000,

    // Normal 'Q'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00101010,
    0b00100100,
    0b00011010,

    // Normal 'R'
    0b00000000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00111100,
    0b00101000,
    0b00100100,
    0b00100010,

    // Normal 'S'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100000,
    0b00011100,
    0b00000010,
    0b00100010,
    0b00011100,

    // Normal 'T'
    0b00000000,
    0b00111110,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,

    // Normal 'U'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00011100,

    // Normal 'V'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,

    // Normal 'W'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00100010,
    0b00101010,
    0b00101010,
    0b00110110,
    0b00100010,

    // Normal 'X'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00100010,

    // Normal 'Y'
    0b00000000,
    0b00100010,
    0b00100010,
    0b00010100,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,

    // Normal 'Z'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00111110,

    // Normal '['
    0b00000000,
    0b00111110,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00110000,
    0b00111110,

    // Normal '\'
    0b00000000,
    0b00000000,
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000000,

    // Normal ']'
    0b00000000,
    0b00111110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00000110,
    0b00111110,

    // Normal '^'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00010100,
    0b00100010,
    0b00000000,
    0b00000000,

    // Normal '_'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,

    // Normal ' '
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Normal '!'
    0b00000000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00001000,

    // Normal '"'
    0b00000000,
    0b00010100,
    0b00010100,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Normal '#'
    0b00000000,
    0b00010100,
    0b00010100,
    0b00111110,
    0b00010100,
    0b00111110,
    0b00010100,
    0b00010100,

    // Normal '$'
    0b00000000,
    0b00001000,
    0b00011110,
    0b00101000,
    0b00011100,
    0b00001010,
    0b00111100,
    0b00001000,

    // Normal '%'
    0b00000000,
    0b00110000,
    0b00110010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100110,
    0b00000110,

    // Normal '&'
    0b00000000,
    0b00010000,
    0b00101000,
    0b00101000,
    0b00010000,
    0b00101010,
    0b00100100,
    0b00011010,

    // Normal '''
    0b00000000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,

    // Normal '('
    0b00000000,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00010000,
    0b00001000,

    // Normal ')'
    0b00000000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000100,
    0b00001000,

    // Normal '*'
    0b00000000,
    0b00001000,
    0b00101010,
    0b00011100,
    0b00001000,
    0b00011100,
    0b00101010,
    0b00001000,

    // Normal '+'
    0b00000000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00111110,
    0b00001000,
    0b00001000,
    0b00000000,

    // Normal ','
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00010000,

    // Normal '-'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00000000,
    0b00000000,

    // Normal '.'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,

    // Normal '/'
    0b00000000,
    0b00000000,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00000000,

    // Normal '0'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100110,
    0b00101010,
    0b00110010,
    0b00100010,
    0b00011100,

    // Normal '1'
    0b00000000,
    0b00001000,
    0b00011000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00001000,
    0b00011100,

    // Normal '2'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00000010,
    0b00001100,
    0b00010000,
    0b00100000,
    0b00111110,

    // Normal '3'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001100,
    0b00000010,
    0b00100010,
    0b00011110,

    // Normal '4'
    0b00000000,
    0b00000100,
    0b00001100,
    0b00010100,
    0b00100100,
    0b00111110,
    0b00000100,
    0b00000100,

    // Normal '5'
    0b00000000,
    0b00111110,
    0b00100000,
    0b00111100,
    0b00000010,
    0b00000010,
    0b00100010,
    0b00011100,

    // Normal '6'
    0b00000000,
    0b00001110,
    0b00010000,
    0b00100000,
    0b00111100,
    0b00100010,
    0b00100010,
    0b00011100,

    // Normal '7'
    0b00000000,
    0b00111110,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00010000,
    0b00010000,

    // Normal '8'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011100,

    // Normal '9'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00100010,
    0b00011110,
    0b00000010,
    0b00000100,
    0b00111000,

    // Normal ':'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00000000,

    // Normal ';'
    0b00000000,
    0b00000000,
    0b00000000,
    0b00001000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00010000,

    // Normal '<'
    0b00000000,
    0b00000100,
    0b00001000,
    0b00010000,
    0b00100000,
    0b00010000,
    0b00001000,
    0b00000100,

    // Normal '='
    0b00000000,
    0b00000000,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00111110,
    0b00000000,
    0b00000000,

    // Normal '>'
    0b00000000,
    0b00010000,
    0b00001000,
    0b00000100,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00010000,

    // Normal '?'
    0b00000000,
    0b00011100,
    0b00100010,
    0b00000100,
    0b00001000,
    0b00001000,
    0b00000000,
    0b00001000,
};
