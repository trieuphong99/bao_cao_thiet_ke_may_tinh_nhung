#include "MKL46Z4.h"                    // NXP::Device:Startup

void SegLCD_display (uint32_t val,uint32_t digit);
#define LCD_SEG_D      0x11
#define LCD_SEG_E      0x22
#define LCD_SEG_G      0x44
#define LCD_SEG_F      0x88
#define LCD_SEG_DP   0x11
#define LCD_SEG_COL   0x11
#define LCD_SEG_C      0x22
#define LCD_SEG_B      0x44
#define LCD_SEG_A      0x88
#define LCD_CLEAR    0x00
//Create Macros for each pin
#define LCD_FRONTPLANE0 37u
#define LCD_FRONTPLANE1 17u
#define LCD_FRONTPLANE2 7u
#define LCD_FRONTPLANE3 8u
#define LCD_FRONTPLANE4 53u
#define LCD_FRONTPLANE5 38u
#define LCD_FRONTPLANE6 10u
#define LCD_FRONTPLANE7 11u
#define LCD_BACKPLANE0    40u
#define LCD_BACKPLANE1    52u
#define LCD_BACKPLANE2    19u
#define LCD_BACKPLANE3    18u
const static uint8_t LCD_Frontplane_Pin[8] = {LCD_FRONTPLANE0, LCD_FRONTPLANE1, LCD_FRONTPLANE2, LCD_FRONTPLANE3, LCD_FRONTPLANE4, LCD_FRONTPLANE5, LCD_FRONTPLANE6, LCD_FRONTPLANE7};
const static uint8_t LCD_Backplane_Pin[4] = {LCD_BACKPLANE0, LCD_BACKPLANE1, LCD_BACKPLANE2, LCD_BACKPLANE3};
