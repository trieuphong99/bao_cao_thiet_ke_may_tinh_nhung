#include "MKL46Z4.h"                    // NXP::Device:Startup
#include "checkingSignal.h"
#include "lch.h"

#define GREEN_LED_PIN          (1<<5)

#define SW3_PIN                (1<<12)

int checkSeatFastened (void) {

	SIM->SCGC5 |= SIM_SCGC5_PORTD_MASK; /* enable clock to Port D */

	PORTD->PCR[5] = PORT_PCR_MUX(1); /* make PTD5 pin as GPIO */

	PTD->PDDR |= GREEN_LED_PIN; /* make PTD5 as output pin */

	SIM->SCGC5 |= SIM_SCGC5_PORTC_MASK; /* enable clock to Port C */

	PORTC->PCR[12]= PORT_PCR_MUX(1) | PORT_PCR_PE_MASK | PORT_PCR_PS_MASK; /* make PTC12 pin as GPIO and enable pull-up resistor */

	FPTC->PDDR &= SW3_PIN; /* make PTA1 as input pin */

	while (1) {

		if (PTC->PDIR & SW3_PIN){ /* check to see if SW1 is pressed */
			
			PTD->PSOR |= GREEN_LED_PIN; /* if not, turn off green LED */
			SegLCD_display(1,4); /* seat belt not fastened yet */
		}
		else{

			PTD->PCOR |= GREEN_LED_PIN; /* turn on green LED */
			SegLCD_display(2,4); /* seat belt is fastened */
		}
	}
}
