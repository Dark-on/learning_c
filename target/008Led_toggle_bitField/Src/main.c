#include <stdint.h>
#include "main.h"


int main(void)
{
	RCC_AHB2ENR_t volatile *const pClkCtrlReg = (RCC_AHB2ENR_t *) 0x4002104C;
	GPIOx_REGS_t volatile *const pGpiobRegs = (GPIOx_REGS_t *) 0x48000400;

	// 1. enable the clock for GPIOB peripheral in the AHB2ENR
	pClkCtrlReg ->gpiob_en = 1;

	// 2. configure the mode of the IO pin as output
	pGpiobRegs->mode.pin13 = 0b01;

	while(1){
		// 3. SET 13th bit of the output data register to make IO pin-13 as HIGH
		pGpiobRegs->output_data.pin13 = 1;

		// introduce small human observable delay
		for(uint32_t i = 0; i < 200000; i++);

		// 4. Turn OFF the LED
		pGpiobRegs->output_data.pin13 = 0;

		for(uint32_t i = 0; i < 200000; i++);

	}
}
