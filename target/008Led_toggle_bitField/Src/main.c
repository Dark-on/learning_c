#include <stdint.h>
#include "main.h"


int main(void)
{
	struct RCC_AHB2_ENR *p_rcc_ahb2_enr = (struct RCC_AHB2_ENR *) 0x4002104C;
//	uint32_t *pClkCtrlReg = (uint32_t *) 0x4002104C;
	struct GPIOx_REGS *p_gpiob_regs = (struct GPIOx_REGS *) 0x48000400;
//	uint32_t *pPortBModeReg = (uint32_t *) 0x48000400;
//	uint32_t *pPortBOutReg = (uint32_t *) 0x48000414;

	// 1. enable the clock for GPIOB peripheral in the AHB2ENR
//	*pClkCtrlReg |= (1 << 1);
	p_rcc_ahb2_enr->gpiob_en = 1;

	// 2. configure the mode of the IO pin as output
	// a. CLEAR the 26th and 27th bit positions
//	*pPortBModeReg &= ~(0b11 << 26);
	p_gpiob_regs->mode.pin13 = 0b01;

	// b. SET the 26th bit position
//	*pPortBModeReg |= (1 << 26);

    /* Loop forever */
	while(1){
		// 3. SET 13th bit of the output data register to make IO pin-13 as HIGH
//		*pPortBOutReg |= (1 << 13);
		p_gpiob_regs->output_data.pin13 = 1;

		// introduce small human observable delay
		for(uint32_t i = 0; i < 200000; i++);

		// 4. Turn OFF the LED
//		*pPortBOutReg &= ~(1 << 13);
		p_gpiob_regs->output_data.pin13 = 0;

		// introduce small human observable delay
		for(uint32_t i = 0; i < 200000; i++);

	}
}
