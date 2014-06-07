/*-
 * Copyright 2002 by Peter Grehan. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef _MACIO_MACIOVAR_H_
#define _MACIO_MACIOVAR_H_

/*
 * The addr space size
 * XXX it would be better if this could be determined by querying the
 *     PCI device, but there isn't an access method for this
 */
#define MACIO_REG_SIZE  0x7ffff

/*
 * Feature Control Registers (FCR)
 */
#define HEATHROW_FCR	0x38
#define KEYLARGO_FCR0	0x38
#define KEYLARGO_FCR1	0x3c
#define KEYLARGO_FCR2	0x40
#define KEYLARGO_FCR3	0x44
#define KEYLARGO_FCR4	0x48
#define KEYLARGO_FCR5	0x4c

#define K2_FCR10	0x24
#define K2_FCR9		0x28
#define K2_FCR8		0x2c
#define K2_FCR7		0x30
#define K2_FCR6		0x34

#define FCR_ENET_ENABLE	0x60000000
#define FCR_ENET_RESET	0x80000000

/* Used only by macio_enable_wireless() for now. */
#define KEYLARGO_GPIO_BASE	0x6a
#define KEYLARGO_EXTINT_GPIO_REG_BASE	0x58

#define KEYLARGO_MEDIABAY	0x34
#define KEYLARGO_MB0_DEV_ENABLE	0x00001000
#define KEYLARGO_MB0_DEV_POWER	0x00000400
#define KEYLARGO_MB0_DEV_RESET	0x00000200
#define KEYLARGO_MB0_ENABLE	0x00000100
#define KEYLARGO_MB1_DEV_ENABLE	0x10000000
#define KEYLARGO_MB1_DEV_POWER	0x04000000
#define KEYLARGO_MB1_DEV_RESET	0x02000000
#define KEYLARGO_MB1_ENABLE	0x01000000

#define FCR0_CHOOSE_SCCB	0x00000001
#define FCR0_CHOOSE_SCCA	0x00000002
#define FCR0_SLOW_SCC_PCLK	0x00000004
#define FCR0_RESET_SCC		0x00000008
#define FCR0_SCCA_ENABLE	0x00000010
#define FCR0_SCCB_ENABLE	0x00000020
#define FCR0_SCC_CELL_ENABLE	0x00000040
#define FCR0_CHOOSE_VIA		0x00000080
#define FCR0_HIGH_BAND_FOR_1MB	0x00000080
#define FCR0_USE_IR_SOURCE_2	0x00000200	/* KeyLargo */
#define FCR0_USE_IR_SOURCE_1	0x00000400	/* KeyLargo */
#define FCR0_USB0_PMI_ENABLE	0x00000400	/* Pangea and Intrepid */
#define FCR0_IRDA_SWRESET	0x00000800	/* KeyLargo */
#define FCR0_USB0_REF_SUSPEND_SEL	0x00000800	/* Pangea and Intrepid */
#define FCR0_IRDA_DEFAULT1	0x00001000	/* KeyLargo */
#define FCR0_USB0_REF_SUSPEND	0x00001000	/* Pangea and Intrepid */
#define FCR0_IRDA_DEFAULT0	0x00002000	/* KeyLargo */
#define FCR0_USB0_PAD_SUSPEND_SEL	0x00002000	/* Pangea and Intrepid */
#define FCR0_IRDA_FAST_CON	0x00004000	/* KeyLargo */
#define FCR0_USB1_PMI_ENABLE	0x00004000	/* Pangea and Intrepid */
#define FCR0_IRDA_ENABLE	0x00008000
#define FCR0_USB1_REF_SUSPEND_SEL	0x00008000
#define FCR0_IRDA_CLK32_ENABLE	0x00010000
#define FCR0_USB1_REF_SUSPEND	0x00010000
#define FCR0_IRDA_CLK19_ENABLE	0x00020000
#define FCR0_USB1_PAD_SUSPEND_SEL	0x00020000
#define FCR0_USB0_PAD_SUSPEND_0	0x00040000
#define FCR0_USB0_PAD_SUSPEND_1	0x00080000
#define FCR0_USB0_CELL_ENABLE	0x00100000
#define FCR0_USB1_PAD_SUSPEND_0	0x00400000
#define FCR0_USB1_PAD_SUSPEND_1	0x00800000
#define FCR0_USB1_CELL_ENABLE	0x01000000
#define FCR0_USB_REF_SUSPEND	0x10000000

#define FCR1_USB2_PMI_ENABLE	0x00000001
#define FCR1_AUDIO_SEL_22MCLK	0x00000002
#define FCR1_USB2_REF_SUSPEND_SEL	0x00000002
#define FCR1_USB2_REF_SUSPEND	0x00000002
#define FCR1_AUDIO_CLK_ENABLE	0x00000008
#define FCR1_USB2_PAD_SUSPEND_SEL	0x00000008
#define FCR1_USB2_PAD_SUSPEND0	0x00000010
#define FCR1_AUDIO_CLKOUT_ENABLE	0x00000020
#define FCR1_USB2_PAD_SUSPEND1	0x00000020
#define FCR1_AUDIO_CELL_ENABLE	0x00000040
#define FCR1_USB2_CELL_ENABLE	0x00000040
#define FCR1_CHOOSE_AUDIO	0x00000080
#define FCR1_CHOOSE_I2S0	0x00000400
#define FCR1_I2S0_CELL_ENABLE	0x00000400
#define FCR1_I2S0_CLK_ENABLE	0x00001000
#define FCR1_I2S0_ENABLE	0x00002000
#define FCR1_I2S1_CELL_ENABLE	0x00020000
#define FCR1_I2S1_CLK_ENABLE	0x00080000
#define FCR1_I2S1_ENABLE	0x00100000
#define FCR1_EIDE0_ENABLE	0x00800000
#define FCR1_EIDE0_RESET	0x01000000
#define FCR1_EIDE1_ENABLE	0x04000000
#define FCR1_EIDE1_RESET	0x08000000
#define FCR1_UIDE_ENABLE	0x20000000
#define FCR1_UIDE_RESET		0x40000000

#define FCR2_IOBUS_ENABLE	0x00000002
#define FCR2_SLEEP_STATE	0x00000100
#define FCR2_STOP_ALL_KL_CLOCKS	0x00000100
#define FCR2_MPIC_ENABLE	0x00020000
#define FCR2_CARD_SLOT_RESET	0x00040000
#define FCR2_ALT_DATA_OUT	0x02000000

#define FCR3_SHUTDOWN_PLL_TOTAL	0x00000001
#define FCR3_SHUTDOWN_PLL_KW6	0x00000002
#define FCR3_SHUTDOWN_PLL3	0x00000002
#define FCR3_SHUTDOWN_PLL_KW4	0x00000004
#define FCR3_SHUTDOWN_PLL2	0x00000004
#define FCR3_SHUTDOWN_PLL_KW35	0x00000008
#define FCR3_SHUTDOWN_PLL1	0x00000008
#define FCR3_SHUTDOWN_PLL_KW12	0x00000010
#define FCR3_ENABLE_PLL3_SHUTDOWN	0x00000010
#define FCR3_ENABLE_PLL2_SHUTDOWN	0x00000020
#define FCR3_ENABLE_PLL1_SHUTDOWN	0x00000040
#define FCR3_SHUTDOWN_PLL_2X	0x00000080
#define FCR3_CLK_66_ENABLE	0x00000100
#define FCR3_CLK_49_ENABLE	0x00000200
#define FCR3_CLK_45_ENABLE	0x00000400
#define FCR3_CLK_31_ENABLE	0x00000800
#define FCR3_TMR_CLK18_ENABLE	0x00001000
#define FCR3_I2S1_CLK18_ENABLE	0x00002000
#define FCR3_I2S0_CLK18_ENABLE	0x00004000
#define FCR3_VIA_CLK16_ENABLE	0x00008000
#define FCR3_VIA_CLK32_ENABLE	0x00008000
#define FCR3_PORT5_DISCONNECT_SELECT	0x00010000
#define FCR3_PORT5_CONNECT_SELECT	0x00020000
#define FCR3_PORT5_RESUME_SELECT	0x00040000
#define FCR3_PORT5_ENABLE	0x00080000
#define FCR3_STOPPING_33_ENABLED	0x00080000
#define FCR3_PLL_ENABLE_TEST	0x00080000
#define FCR3_PORT5_DISCONNECT	0x00100000
#define FCR3_PORT5_CONNECT	0x00200000
#define FCR3_PORT5_RESUME	0x00400000
#define FCR3_PORT6_DISCONNECT_SELECT	0x00800000
#define FCR3_PORT6_CONNECT_SELECT	0x02000000
#define FCR3_PORT6_RESUME_SELECT	0x04000000
#define FCR3_PORT6_ENABLE	0x08000000
#define FCR3_PORT6_DISCONNECT	0x10000000
#define FCR3_PORT6_CONNECT	0x20000000
#define FCR3_PORT6_RESUME	0x40000000

#define FCR4_PORT1_DISCONNECT_SELECT	0x00000001
#define FCR4_PORT1_CONNECT_SELECT	0x00000002
#define FCR4_PORT1_RESUME_SELECT	0x00000004
#define FCR4_PORT1_ENABLE	0x00000008
#define FCR4_PORT1_DISCONNECT	0x00000010
#define FCR4_PORT1_CONNECT	0x00000020
#define FCR4_PORT1_RESUME	0x00000040
#define FCR4_PORT2_DISCONNECT_SELECT	0x00000100
#define FCR4_PORT2_CONNECT_SELECT	0x00000200
#define FCR4_PORT2_RESUME_SELECT	0x00000400
#define FCR4_PORT2_ENABLE	0x00000800
#define FCR4_PORT2_DISCONNECT	0x00001000
#define FCR4_PORT2_CONNECT	0x00002000
#define FCR4_PORT2_RESUME	0x00004000
#define FCR4_PORT3_DISCONNECT_SELECT	0x00010000
#define FCR4_PORT3_CONNECT_SELECT	0x00020000
#define FCR4_PORT3_RESUME_SELECT	0x00040000
#define FCR4_PORT3_ENABLE	0x00080000
#define FCR4_PORT3_DISCONNECT	0x00100000
#define FCR4_PORT3_CONNECT	0x00200000
#define FCR4_PORT3_RESUME	0x00400000
#define FCR4_PORT4_DISCONNECT_SELECT	0x01000000
#define FCR4_PORT4_CONNECT_SELECT	0x02000000
#define FCR4_PORT4_RESUME_SELECT	0x04000000
#define FCR4_PORT4_ENABLE	0x08000000
#define FCR4_PORT4_DISCONNECT	0x10000000
#define FCR4_PORT4_CONNECT	0x20000000
#define FCR4_PORT4_RESUME	0x40000000

#define FCR5_VIA_USE_CLK31	0x00000001
#define FCR5_SCC_USE_CLK31	0x00000002
#define FCR5_PWM_CLK32_ENABLE	0x00000004
#define FCR5_CLK3_68_ENABLE	0x00000010
#define FCR5_CLK32_ENABLE	0x00000020

/* KeyLargo sleep bits */
#define KEYLARGO_FCR0_SLEEP_SET	FCR0_USB_REF_SUSPEND
#define KEYLARGO_FCR0_SLEEP_CLR	(FCR0_SCCA_ENABLE | FCR0_SCCB_ENABLE | \
	FCR0_SCC_CELL_ENABLE | FCR0_IRDA_ENABLE | FCR0_IRDA_CLK32_ENABLE | \
	FCR0_IRDA_CLK19_ENABLE)

#define KEYLARGO_FCR1_SLEEP_SET	0
#define KEYLARGO_FCR1_SLEEP_CLR	(FCR1_AUDIO_SEL_22MCLK | FCR1_AUDIO_CLK_ENABLE | \
	FCR1_AUDIO_CLKOUT_ENABLE | FCR1_AUDIO_CELL_ENABLE | \
	FCR1_I2S0_CELL_ENABLE | FCR1_I2S0_CLK_ENABLE | FCR1_I2S0_ENABLE | \
	FCR1_I2S1_CELL_ENABLE | FCR1_I2S1_CLK_ENABLE | FCR1_I2S1_ENABLE | \
	FCR1_EIDE0_ENABLE | FCR1_EIDE1_ENABLE | FCR1_UIDE_ENABLE | \
	FCR1_EIDE0_RESET | FCR1_EIDE1_RESET)

#define KEYLARGO_FCR2_SLEEP_SET	0
#define KEYLARGO_FCR2_SLEEP_CLR	FCR2_IOBUS_ENABLE

#define KEYLARGO_FCR3_SLEEP_SET	(FCR3_SHUTDOWN_PLL_KW6 | FCR3_SHUTDOWN_PLL_KW4 | \
	FCR3_SHUTDOWN_PLL_KW35 | FCR3_SHUTDOWN_PLL_KW12)
#define KEYLARGO_FCR3_SLEEP_CLR	(FCR3_CLK_66_ENABLE | FCR3_CLK_49_ENABLE | \
	FCR3_CLK_45_ENABLE | FCR3_CLK_31_ENABLE | FCR3_TMR_CLK18_ENABLE | \
	FCR3_I2S1_CLK18_ENABLE | FCR3_I2S0_CLK18_ENABLE | FCR3_VIA_CLK32_ENABLE)

/* Pangea sleep bits */
#define PANGEA_FCR0_SLEEP_SET	0
#define PANGEA_FCR0_SLEEP_CLR	(FCR0_USB1_CELL_ENABLE | FCR0_USB0_CELL_ENABLE | \
	FCR0_SCC_CELL_ENABLE | FCR0_SCCB_ENABLE | FCR0_SCCA_ENABLE)

#define PANGEA_FCR1_SLEEP_SET	0
#define PANGEA_FCR1_SLEEP_CLR	(FCR1_AUDIO_SEL_22MCLK | FCR1_AUDIO_CLK_ENABLE | \
	FCR1_AUDIO_CLKOUT_ENABLE | FCR1_AUDIO_CELL_ENABLE | \
	FCR1_I2S0_CELL_ENABLE | FCR1_I2S0_CLK_ENABLE | FCR1_I2S0_ENABLE | \
	FCR1_I2S1_CELL_ENABLE | FCR1_I2S1_CLK_ENABLE | FCR1_I2S1_ENABLE | \
	FCR1_UIDE_ENABLE)

#define PANGEA_FCR2_SLEEP_SET	FCR2_ALT_DATA_OUT
#define PANGEA_FCR2_SLEEP_CLR	0

#define PANGEEA_FCR3_SLEEP_SET	(FCR3_SHUTDOWN_PLL_KW35 | \
	FCR3_SHUTDOWN_PLL_KW4 | FCR3_SHUTDOWN_PLL_KW6)
#define PANGEA_FCR3_SLEEP_CLR	(FCR3_CLK_49_ENABLE | FCR3_CLK_45_ENABLE | \
	FCR3_CLK_31_ENABLE | FCR3_TMR_CLK18_ENABLE | \
	FCR3_I2S1_CLK18_ENABLE | FCR3_I2S0_CLK18_ENABLE | FCR3_VIA_CLK16_ENABLE)

/* Intrepid sleep bits */
#define INTREPID_FCR0_SLEEP_SET	0
#define INTREPID_FCR0_SLEEP_CLR	(FCR0_SCCA_ENABLE | FCR0_SCCB_ENABLE | \
	FCR0_SCC_CELL_ENABLE)

#define INTREPID_FCR1_SLEEP_SET	0
#define INTREPID_FCR1_SLEEP_CLR	( FCR1_I2S0_CELL_ENABLE | \
	FCR1_I2S0_CLK_ENABLE | FCR1_I2S0_ENABLE | \
	FCR1_I2S1_CELL_ENABLE | FCR1_I2S1_CLK_ENABLE | \
	FCR1_I2S1_ENABLE | FCR1_UIDE_ENABLE)

#define INTREPID_FCR2_SLEEP_SET	0
#define INTREPID_FCR2_SLEEP_CLR	0

#define INTREPID_FCR3_SLEEP_SET	0
#define INTREPID_FCR3_SLEEP_CLR	(FCR3_CLK_49_ENABLE | FCR3_CLK_45_ENABLE | \
	FCR3_TMR_CLK18_ENABLE | \
	FCR3_I2S1_CLK18_ENABLE | FCR3_I2S0_CLK18_ENABLE | FCR3_VIA_CLK16_ENABLE)


/*
 * K2 FCRs.
 */
#define FCR0_K2_USB0_SWRESET	0x00200000
#define FCR0_K2_USB1_SWRESET	0x02000000
#define FCR0_K2_RING_PME_DISABLE	0x08000000

#define FCR1_K2_I2S2_CELL_ENABLE	0x00000010
#define FCR1_K2_I2S2_CLK_ENABLE	0x00000040
#define FCR1_K2_I2S2_ENABLE	0x00000080
#define FCR1_K2_PCI1_BUS_RESET	0x00000100
#define FCR1_K2_PCI1_SLEEP_RESET_EN	0x00000200
#define FCR1_K2_PCI1_CLK_ENABLE	0x00004000
#define FCR1_K2_FW_CLK_ENABLE	0x00008000
#define FCR1_K2_FW_RESET	0x00010000
#define FCR1_K2_I2S1_SWRESET	0x00040000
#define FCR1_K2_GB_CLK_ENABLE	0x00400000
#define FCR1_GB_PWR_DOWN	0x00800000
#define FCR1_K2_GB_RESET	0x01000000
#define FCR1_K2_SATA_CLK_ENABLE	0x02000000
#define FCR1_K2_SATA_PWR_DOWN	0x04000000
#define FCR1_K2_SATA_RESET	0x08000000
#define FCR1_K2_UATA_CLK_ENABLE	0x10000000
#define FCR1_K2_UATA_RESET	0x40000000
#define FCR1_K2_UATA_CHOOSE_CLK66	0x80000000

#define FCR2_K2_PWM0_AUTO_STOP_EN	0x00000010
#define FCR2_K2_PWM1_AUTO_STOP_EN	0x00000020
#define FCR2_K2_PWM2_AUTO_STOP_EN	0x00000040
#define FCR2_K2_PWM3_AUTO_STOP_EN	0x00000080
#define FCR2_K2_PWM0_OVER_TEMP_EN	0x00000100
#define FCR2_K2_PWM1_OVER_TEMP_EN	0x00000200
#define FCR2_K2_PWM2_OVER_TEMP_EN	0x00000400
#define FCR2_K2_PWM3_OVER_TEMP_EN	0x00000800
#define FCR2_K2_HT_ENABLE_INTERRUPTS	0x00008000
#define FCR2_K2_SB_MPIC_ENABLE_OUTPUTS	0x00010000
#define FCR2_K2_SB_MPIC_RESET		0x00010000
#define FCR2_K2_FW_LINK_ON_INT_EN	0x00040000
#define FCR2_K2_FW_ALT_LINK_ON_SEL	0x00080000
#define FCR2_K2_PWMS_EN			0x00100000
#define FCR2_K2_GB_WAKE_INT_EN		0x00200000
#define FCR2_K2_GB_ENERGY_INT_EN	0x00400000
#define FCR2_K2_BLOCK_EXT_GPIO1		0x00800000
#define FCR2_K2_PCI0_BRIDGE_INT		0x01000000
#define FCR2_K2_PCI1_BRIDGE_INT		0x02000000
#define FCR2_K2_PCI2_BRIDGE_INT		0x04000000
#define FCR2_K2_PCI3_BRIDGE_INT		0x08000000
#define FCR2_K2_PCI4_BRIDGE_INT		0x10000000
#define FCR2_K2_HT_NONFATAL_ERROR	0x40000000
#define FCR2_K2_HT_FATAL_ERROR		0x80000000

#define FCR3_K2_ENABLE_OSC25_SHUTDOWN	0x00000001
#define FCR3_K2_ENABLE_FW_PAD_PWRDOWN	0x00000002
#define FCR3_K2_ENABLE_GBPAD_PWRDOWN	0x00000004
#define FCR3_K2_ENABLE_PLL0_SHUTDOWN	0x00000080
#define FCR3_K2_ENABLE_PLL6_SHUTDOWN	0x00000100
#define FCR3_K2_DYN_CLK_STOP_ENABLE	0x00000800
#define FCR3_K2_I2S2_CLK18_ENABLE	0x00008000

#define FCR9_K2_PCI1_CLK66_IS_STOPPED	0x00000001
#define FCR9_K2_PCI2_CLK66_IS_STOPPED	0x00000002
#define FCR9_K2_FW_CLK66_IS_STOPPED	0x00000004
#define FCR9_K2_UATA_CLK66_IS_STOPPED	0x00000008
#define FCR9_K2_UATA_CLK100_IS_STOPPED	0x00000010
#define FCR9_K2_PCI3_CLK66_IS_STOPPED	0x00000020
#define FCR9_K2_GB_CLK66_IS_STOPPED	0x00000040
#define FCR9_K2_PCI4_CLK66_IS_STOPPED	0x00000080
#define FCR9_K2_SATA_CLK66_IS_STOPPED	0x00000100
#define FCR9_K2_USB0_CLK48_IS_STOPPED	0x00000200
#define FCR9_K2_USB1_CLK48_IS_STOPPED	0x00000400
#define FCR9_K2_CLK45_IS_STOPPED	0x00000800
#define FCR9_K2_CLK49_IS_STOPPED	0x00001000
#define FCR9_K2_OSC25_SHUTDOWN		0x00008000

/* K2 sleep bits */
#define K2_FCR0_SLEEP_SET	0
#define K2_FCR0_SLEEP_CLR	(FCR0_USB1_CELL_ENABLE | FCR0_USB0_CELL_ENABLE | \
	FCR0_SCC_CELL_ENABLE | FCR0_SCCB_ENABLE | FCR0_SCCA_ENABLE)

#define K2_FCR1_SLEEP_SET	0
#define K2_FCR1_SLEEP_CLR	( FCR1_I2S0_CELL_ENABLE | \
	FCR1_I2S0_CLK_ENABLE | FCR1_I2S0_ENABLE | \
	FCR1_I2S1_CELL_ENABLE | FCR1_I2S1_CLK_ENABLE | FCR1_I2S1_ENABLE | \
	FCR1_K2_SATA_RESET | FCR1_K2_UATA_RESET | FCR1_K2_GB_CLK_ENABLE)

#define K2_FCR2_SLEEP_SET	0
#define K2_FCR2_SLEEP_CLR	FCR2_K2_SB_MPIC_ENABLE_OUTPUTS

#define K2_FCR3_SLEEP_SET	0
#define K2_FCR3_SLEEP_CLR	FCR3_K2_ENABLE_OSC25_SHUTDOWN

/*
 * Format of a macio reg property entry.
 */
struct macio_reg {
	u_int32_t	mr_base;
	u_int32_t	mr_size;
};

/*
 * Per macio device structure.
 */
struct macio_devinfo {
	int        mdi_interrupts[6];
	int	   mdi_ninterrupts;
	int        mdi_base;
	int	   mdi_aapl_busid;
	struct ofw_bus_devinfo mdi_obdinfo;
	struct resource_list mdi_resources;
};

extern int macio_enable_wireless(device_t dev, bool enable);
extern int macio_reset_ata(device_t atadev);

#endif /* _MACIO_MACIOVAR_H_ */
