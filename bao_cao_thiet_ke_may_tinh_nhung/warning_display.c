#include "MKL46Z4.h"
#include "lch.h"

void SegLCD_display(uint32_t Value, uint32_t Digit){
  //Sets a value from 0-F to a specified Digit, with 1 being the leftmost, 4 being the rightmost.
 if(Digit > 4){
 //Display "Err" if trying to access a digit that does not exist
 }
 else{
	if(Value==0x00){
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_E |LCD_SEG_F);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_B | LCD_SEG_C);}
	else if (Value==0x01) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_CLEAR);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_B | LCD_SEG_C);
	}
	else if (Value==0x02) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_E | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_B);
	}
	else if (Value==0x03) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_B | LCD_SEG_C);
	}
	else if (Value==0x04) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_B | LCD_SEG_C);
	}
	else if (Value==0x05) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_C);
	}
	else if (Value==0x06){
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_E | LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_C);
	}
	else if (Value==0x07) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_CLEAR);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_B | LCD_SEG_C);
	}
	else if(Value==0x08) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_E | LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_B | LCD_SEG_C);
	}
	else if (Value==0x09) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_B | LCD_SEG_C);
	}
	else if (Value==0x0A) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_E | LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = (LCD_SEG_A | LCD_SEG_B | LCD_SEG_C);
	}
	else if (Value==0x0B) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_E | LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = LCD_SEG_C;
	}
	else if (Value==0x0C) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_E | LCD_SEG_F);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = LCD_SEG_A;
	} 
	else if (Value==0x0D) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_E | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = LCD_SEG_B | LCD_SEG_C;
	}
	else if (Value==0x0E) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_D | LCD_SEG_E | LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = LCD_SEG_A;
	}
	else if (Value==0x0F) {
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-2)]] = (LCD_SEG_E | LCD_SEG_F | LCD_SEG_G);
		LCD->WF8B[LCD_Frontplane_Pin[((2*Digit)-1)]] = LCD_SEG_A;}
 }
}
