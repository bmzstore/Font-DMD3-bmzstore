

/*
 * Fareed Read
 * http://www.facebook.com/fareedreads
 *
 * bmz13x23
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : bmz13x23.h
 * Date                : 18.01.2020
 * Font size in bytes  : 3006
 * Font width          : 13
 * Font height         : -23
 * Font first char     : 48
 * Font last char      : 58
 * Font used chars     : 10
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef BMZ13X23_H
#define BMZ13X23_H

#define BMZ13X23_WIDTH 13
#define BMZ13X23_HEIGHT -23

const static uint8_t bmz13x23[] PROGMEM = {
    0x0B, 0xBE, // size
    0x0D, // width
    0x17, // height
    0x30, // first char
    0x0A, // char count
    
    // char widths
    0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
    
    
    // font data
    0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFB, 0xFD, 0xFE, 0xFF, 0xF7, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xF7, 0xFF, 0x7E, 0xBE, 0xDE, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xDE, 0xBE, 0x7E, // 48
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEF, 0xF7, 0xFB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFB, 0xFD, 0xFE, 0xF8, 0xF4, 0xEC, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1B, 0x17, 0x0F, 0x7E, 0xBE, 0xDE, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, // 50
    0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFB, 0xFD, 0xFE, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEB, 0xF7, 0xFF, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xDE, 0xBE, 0x7E, // 51
    0xFF, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0xFF, 0x0F, 0x17, 0x1B, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEB, 0xF7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x7E, 0xFE, // 52
    0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0x0F, 0x17, 0x1B, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEC, 0xF4, 0xF8, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xDE, 0xBE, 0x7E, // 53
    0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x01, 0xFF, 0xF7, 0xEB, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEC, 0xF4, 0xF8, 0x7E, 0xBE, 0xDE, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xDE, 0xBE, 0x7E, // 54
    0x01, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFB, 0xFD, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE3, 0xF7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x7E, 0xFE, // 55
    0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFB, 0xFD, 0xFE, 0xFF, 0xF7, 0xEB, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEB, 0xF7, 0xFF, 0x7E, 0xBE, 0xDE, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xDE, 0xBE, 0x7E, // 56
    0xFE, 0xFD, 0xFB, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFB, 0xFD, 0xFE, 0x0F, 0x17, 0x1B, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xEB, 0xF7, 0xFF, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xDE, 0xBE, 0x7E // 57
    
};

#endif
