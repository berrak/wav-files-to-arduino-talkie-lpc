
//==================================================================================
// Name        : hellolpc.h
// Author      : Created by Debinix Team (c).
// License     : GPL-3.0
// Version     : Date 2022-10-15.
// Description : This file contains the linear predictive coding (LPC) for the 
//               original 'hello.wav' file. LPC encoding was done with python_wizzard.
//               https://github.com/ptwz/python_wizard. Mac OS X user can use
//               https://github.com/patrick99e99/BlueWizard.
//
// What's next : Explore the 'WAV-to-LPC conversion guide' to learn more.
//               (https://github.com/berrak/wav-files-to-arduino-talkie-lpc)
//==================================================================================

// tms5220 - hello.wav
const unsigned char FILENAME[] PROGMEM = {0xE3,0x2C,0x52,0x73,0xD2,0x8D,0x8C,0x3C,0x2B,0xAD,0x0E,0x33,0x3C,0xF2,0xA2,0x24,0x2B,0xDD,0x48,0x2B,0x12,0xF7,0xE8,0xD4,0xC0,0xA9,0x08,0x28,0x33,0xC6,0x42,0xA6,0x22,0x80,0x1A,0x1B,0x17,0x95,0x8A,0x0C,0x6C,0x23,0x53,0x54,0xCA,0x13,0xF0,0x8D,0x4C,0x53,0x25,0x4F,0xC0,0xDB,0xA6,0x4C,0x96,0x2C,0x43,0x0F,0xDE,0x09,0x39,0x92,0xCC,0x4C,0xB5,0xE2,0xE6,0x0A,0x8B,0x36,0xB7,0x8C,0x9B,0x2B,0x8C,0x3A,0x3C,0x2A,0x47,0xAF,0x20,0xCA,0x4E,0x2B,0xBD,0x3D,0xFC,0xA4,0xC6,0xA9,0xED,0xF6,0xF0,0xB2,0x4A,0x77,0xC7,0xDB,0xCD,0x8D,0x2A,0x22,0x8C,0xAF,0x34,0x37,0xC8,0x49,0x0D,0xB9,0xD2,0x9C,0xC8,0xA6,0x24,0xF9,0x72,0x73,0xBD,0xAE,0x0C,0x95,0xDB,0xC5,0xB5,0x2E,0xDA,0x30,0x1F,0x17,0xCF,0x9B,0x0E,0x17,0x79,0x55,0x82,0x68,0x32,0x9D,0xE9,0x51,0x0A,0x83,0x6F,0x17,0x96,0x5B,0x29,0x0A,0xAE,0x43,0x99,0x66,0xA5,0xD8,0xDB,0x4E,0x17,0x5A,0x54,0x62,0x6F,0x37,0x55,0x79,0x65,0x89,0x8D,0xDB,0x32,0x97,0x55,0x25,0x91,0x65,0xC2,0x2C,0x56,0x96,0x54,0xE4,0x4D,0x17,0x5B,0x59,0x52,0x91,0xB7,0x42,0xB9,0x63,0x4A,0x79,0x9D,0x4C,0xD6,0x8E,0x29,0xE3,0x79,0xCB,0x55,0x5A,0xA5,0x8C,0x97,0x0D,0x51,0x6B,0x95,0x72,0xDE,0x3A,0x59,0x7D,0x63,0xCA,0xF9,0x6C,0x67,0x8F,0xC5,0x21,0x67,0x73,0x82,0xDD,0x5A,0x87,0x82,0xE5,0x2E,0x51,0x59,0x14,0x0A,0x1E,0x3B,0x45,0xB5,0xB1,0x2B,0x45,0x2E,0x63,0x55,0xB7,0xAE,0x92,0xAE,0x4A,0x95,0x93,0xA6,0x2A,0x53,0x89,0x09,0x65,0x12,0x2A,0xAB,0xB2,0x52,0xC5,0xB1,0xAB,0x8D,0xE9,0x34,0x55,0x3B,0xAE,0xF1,0x2A,0x33,0x8C,0x1D,0xBB,0x26,0x72,0xCB,0x08,0x8E,0xED,0xDA,0x2C,0x34,0xD2,0x49,0xB6,0x69,0x93,0xD4,0x4C,0x15,0xDB,0xAE,0x4B,0xCC,0x22,0x5D,0x6D,0x99,0xBE,0x0A,0xB5,0x70,0xB5,0x65,0xC6,0xAA,0xCC,0xDD,0xC4,0x92,0x59,0x9B,0xB6,0x08,0x17,0x4B,0x66,0x19,0x3A,0xCC,0xD3,0x6C,0xAB,0xB8,0x1B,0x73,0x0B,0x4B,0xA2,0xFC,0x6E,0xDC,0xDD,0x35,0x8E,0x4A,0x9B,0x0E,0x77,0xB7,0xC4,0xEA,0x18,0xCE,0x2D,0x42,0x13,0xAB,0xAF,0x1B,0xF7,0x08,0x73,0xAC,0xB8,0xAE,0xDC,0x35,0x2D,0x89,0x60,0xBB,0x32,0xD7,0xB4,0x38,0x0F,0xE8,0x32};