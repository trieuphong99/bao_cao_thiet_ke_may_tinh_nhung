#include "MKL46Z4.h"                    // NXP::Device:Startup
#include "checkingSignal.h"
#include "lch.h"

#define RED_LED_PIN          (1<<29)

#define SW1_PIN                (1<<3)

int checkinVehicle (void) {

	SIM->SCGC5 |= SIM_SCGC5_PORTE_MASK; /* cap xung nhip cho cong E */

	PORTE->PCR[29] = PORT_PCR_MUX(1); /* chon chuc nang GPIO cho chan PTE29 */

	PTE->PDDR |= RED_LED_PIN; /* dat chan PTE29 lam dau ra */

	SIM->SCGC5 |= SIM_SCGC5_PORTC_MASK; /* cap xung nhip cho cong C */

	PORTC->PCR[3]= PORT_PCR_MUX(1) | PORT_PCR_PE_MASK | PORT_PCR_PS_MASK; /* chon chuc nang GPIO cho chan PTC3 */

	FPTC->PDDR &= SW1_PIN; /* doc trang thai SW1 */

	while (1) {

		if (PTC->PDIR & SW1_PIN){	/* check to see if SW1 is pressed */

			PTE->PSOR |= RED_LED_PIN; /* if not, turn off green LED */
		}
		else {

			PTE->PCOR |= RED_LED_PIN; /* turn on green LED */
			SegLCD_display(3,4);
			checkSeatFastened();
		}
	}
}
