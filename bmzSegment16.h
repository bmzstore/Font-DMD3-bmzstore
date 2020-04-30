

/*
 * Fareed Read
 * http://www.facebook.com/fareedreads
 *
 * bmzSegment
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : bmzSegment16.h
 * Date                : 05.11.2019
 * Font size in bytes  : 1296
 * Font width          : 8
 * Font height         : -16
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

#ifndef bmzSegment16_H
#define bmzSegment16_H

#define bmzSegment16_WIDTH 8
#define bmzSegment16_HEIGHT 16

const static uint8_t bmzSegment16[] PROGMEM = {
    0x08, 0x10, // size
    0x08, // width
    0x10, // height
    0x30, // first char
    0x0A, // char count
    
    // char widths
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    
    
    // font data
    0xFE, 0x7D, 0x03, 0x03, 0x03, 0x03, 0x7D, 0xFE, 0x7F, 0xBE, 0xC0, 0xC0, 0xC0, 0xC0, 0xBE, 0x7F, // 48
    0x00, 0x00, 0x00, 0xFF, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xFF, 0x00, 0x00, 0x00, // 49
    0x01, 0x83, 0x83, 0x83, 0x83, 0x83, 0x7D, 0xFE, 0x7F, 0xBE, 0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0x80, // 50
    0x01, 0x83, 0x83, 0x83, 0x83, 0x83, 0x7D, 0xFE, 0x80, 0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0xBE, 0x7F, // 51
    0xFF, 0x7E, 0x80, 0x80, 0x80, 0x80, 0x7E, 0xFF, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x7E, 0xFF, // 52
    0xFE, 0x7D, 0x83, 0x83, 0x83, 0x83, 0x83, 0x01, 0x80, 0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0xBE, 0x7F, // 53
    0xFE, 0x7D, 0x83, 0x83, 0x83, 0x83, 0x83, 0x01, 0x7F, 0xBE, 0xC1, 0xC1, 0xC1, 0xC1, 0xBE, 0x7F, // 54
    0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x7D, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xFF, // 55
    0xFE, 0x7D, 0x83, 0x83, 0x83, 0x83, 0x7D, 0xFE, 0x7F, 0xBE, 0xC1, 0xC1, 0xC1, 0xC1, 0xBE, 0x7F, // 56
    0xFE, 0x7D, 0x83, 0x83, 0x83, 0x83, 0x7D, 0xFE, 0x80, 0xC1, 0xC1, 0xC1, 0xC1, 0xC1, 0xBE, 0x7F // 57
    
};

#endif
