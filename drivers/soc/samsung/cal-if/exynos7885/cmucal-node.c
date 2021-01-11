#include "../cmucal.h"
#include "cmucal-node.h"
#include "cmucal-sfr.h"

/*=================CMUCAL version: LASSEN================================*/

/*====================The section of PLL rate tables===================*/
struct cmucal_pll_table pll_shared0_rate_table[] = {
	PLL_RATE_MPS(1599000000, 246, 4, 0),
};

struct cmucal_pll_table pll_shared1_rate_table[] = {
	PLL_RATE_MPS(1334000000, 667, 13, 0),
};

struct cmucal_pll_table pll_cpucl0_rate_table[] = {
	PLL_RATE_MPS(1300000000, 150, 3, 0),
	PLL_RATE_MPS(1698666748, 196, 3, 0),
	PLL_RATE_MPS(2192666748, 253, 3, 0),
	PLL_RATE_MPS(476666687, 220, 3, 2),
	PLL_RATE_MPS(747500000, 230, 4, 1),
};

struct cmucal_pll_table pll_cpucl1_rate_table[] = {
	PLL_RATE_MPS(1001000000, 154, 4, 0),
	PLL_RATE_MPS(1352000000, 156, 3, 0),
	PLL_RATE_MPS(1599000000, 246, 4, 0),
	PLL_RATE_MPS(385125000, 237, 4, 2),
	PLL_RATE_MPS(598000000, 138, 3, 1),
};

struct cmucal_pll_table pll_cpucl2_rate_table[] = {
	PLL_RATE_MPS(1001000000, 154, 4, 0),
	PLL_RATE_MPS(1352000000, 156, 3, 0),
	PLL_RATE_MPS(1599000000, 246, 4, 0),
	PLL_RATE_MPS(385125000, 237, 4, 2),
	PLL_RATE_MPS(598000000, 138, 3, 1),
};

struct cmucal_pll_table pll_aud_rate_table[] = {
	PLL_RATE_MPSK(1179648000, 45, 1, 0, 24319),
	PLL_RATE_MPSK(1083801600, 42, 1, 0, -20665),
};

struct cmucal_pll_table pll_usb_rate_table[] = {
	PLL_RATE_MPS(50000000, 400, 13, 4),
};

struct cmucal_pll_table pll_g3d_rate_table[] = {
	PLL_RATE_MPS(747500000, 115, 4, 0),
	PLL_RATE_MPS(949000000, 146, 4, 0),
	PLL_RATE_MPS(1196000000, 138, 3, 0),
	PLL_RATE_MPS(301000000, 301, 13, 1),
	PLL_RATE_MPS(550333313, 127, 3, 1),
};

struct cmucal_pll_table pll_mif_rate_table[] = {
	PLL_RATE_MPS(1865500000, 287, 4, 0),
	PLL_RATE_MPS(666250000, 205, 4, 1),
	PLL_RATE_MPS(1332500000, 205, 4, 0),
};

struct cmucal_pll_table pll_mif1_rate_table[] = {
};

/*====================The section of PLLs===================*/
unsigned int cmucal_pll_size = 10;

struct cmucal_pll cmucal_pll_list[] = {
	CLK_PLL(PLL_1417X, PLL_SHARED0, OSCCLK_CMU, PLL_LOCKTIME_PLL_SHARED0_PLL_LOCK_TIME, PLL_CON0_PLL_SHARED0_ENABLE, PLL_CON0_PLL_SHARED0_STABLE, PLL_CON0_PLL_SHARED0_DIV_P, PLL_CON0_PLL_SHARED0_DIV_M, PLL_CON0_PLL_SHARED0_DIV_S, EMPTY_CAL_ID, pll_shared0_rate_table, 0, 0),
	CLK_PLL(PLL_1417X, PLL_SHARED1, OSCCLK_CMU, PLL_LOCKTIME_PLL_SHARED1_PLL_LOCK_TIME, PLL_CON0_PLL_SHARED1_ENABLE, PLL_CON0_PLL_SHARED1_STABLE, PLL_CON0_PLL_SHARED1_DIV_P, PLL_CON0_PLL_SHARED1_DIV_M, PLL_CON0_PLL_SHARED1_DIV_S, EMPTY_CAL_ID, pll_shared1_rate_table, 0, 0),
	CLK_PLL(PLL_1417X, PLL_CPUCL0, OSCCLK_CPUCL0, PLL_LOCKTIME_PLL_CPUCL0_PLL_LOCK_TIME, PLL_CON0_PLL_CPUCL0_ENABLE, PLL_CON0_PLL_CPUCL0_STABLE, PLL_CON0_PLL_CPUCL0_DIV_P, PLL_CON0_PLL_CPUCL0_DIV_M, PLL_CON0_PLL_CPUCL0_DIV_S, EMPTY_CAL_ID, pll_cpucl0_rate_table, 0, 0),
	CLK_PLL(PLL_1417X, PLL_CPUCL1, OSCCLK_CPUCL1, PLL_LOCKTIME_PLL_CPUCL1_PLL_LOCK_TIME, PLL_CON0_PLL_CPUCL1_ENABLE, PLL_CON0_PLL_CPUCL1_STABLE, PLL_CON0_PLL_CPUCL1_DIV_P, PLL_CON0_PLL_CPUCL1_DIV_M, PLL_CON0_PLL_CPUCL1_DIV_S, EMPTY_CAL_ID, pll_cpucl1_rate_table, 0, 0),
	CLK_PLL(PLL_1417X, PLL_CPUCL2, OSCCLK_CPUCL2, PLL_LOCKTIME_PLL_CPUCL2_PLL_LOCK_TIME, PLL_CON0_PLL_CPUCL2_ENABLE, PLL_CON0_PLL_CPUCL2_STABLE, PLL_CON0_PLL_CPUCL2_DIV_P, PLL_CON0_PLL_CPUCL2_DIV_M, PLL_CON0_PLL_CPUCL2_DIV_S, EMPTY_CAL_ID, pll_cpucl2_rate_table, 0, 0),
	CLK_PLL(PLL_1431X, PLL_AUD, OSCCLK_DISPAUD, PLL_LOCKTIME_PLL_AUD_PLL_LOCK_TIME, PLL_CON0_PLL_AUD_ENABLE, PLL_CON0_PLL_AUD_STABLE, PLL_CON0_PLL_AUD_DIV_P, PLL_CON0_PLL_AUD_DIV_M, PLL_CON0_PLL_AUD_DIV_S, PLL_CON3_PLL_AUD_DIV_K, pll_aud_rate_table, 0, 0),
	CLK_PLL(PLL_1418X, PLL_USB, OSCCLK_FSYS, PLL_LOCKTIME_PLL_USB_PLL_LOCK_TIME, PLL_CON0_PLL_USB_ENABLE, PLL_CON0_PLL_USB_STABLE, PLL_CON0_PLL_USB_DIV_P, PLL_CON0_PLL_USB_DIV_M, PLL_CON0_PLL_USB_DIV_S, EMPTY_CAL_ID, pll_usb_rate_table, 0, 0),
	CLK_PLL(PLL_1417X, PLL_G3D, OSCCLK_G3D, PLL_LOCKTIME_PLL_G3D_PLL_LOCK_TIME, PLL_CON0_PLL_G3D_ENABLE, PLL_CON0_PLL_G3D_STABLE, PLL_CON0_PLL_G3D_DIV_P, PLL_CON0_PLL_G3D_DIV_M, PLL_CON0_PLL_G3D_DIV_S, EMPTY_CAL_ID, pll_g3d_rate_table, 0, 0),
	CLK_PLL(PLL_1480X, PLL_MIF, OSCCLK_MIF, PLL_LOCKTIME_PLL_MIF_PLL_LOCK_TIME, PLL_CON0_PLL_MIF_ENABLE, PLL_CON0_PLL_MIF_STABLE, PLL_CON0_PLL_MIF_DIV_P, PLL_CON0_PLL_MIF_DIV_M, PLL_CON0_PLL_MIF_DIV_S, EMPTY_CAL_ID, pll_mif_rate_table, 0, 0),
	CLK_PLL(PLL_1480X, PLL_MIF1, OSCCLK_MIF1, PLL_LOCKTIME_PLL_MIF1_PLL_LOCK_TIME, PLL_CON0_PLL_MIF1_ENABLE, PLL_CON0_PLL_MIF1_STABLE, PLL_CON0_PLL_MIF1_DIV_P, PLL_CON0_PLL_MIF1_DIV_M, PLL_CON0_PLL_MIF1_DIV_S, EMPTY_CAL_ID, pll_mif1_rate_table, 0, 0),
};

/*====================The section of MUXs' parents===================*/
enum clk_id cmucal_mux_clkcmu_mfcmscl_mscl_parents[] = {
	PLL_SHARED0_DIV3,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_mfcmscl_mfc_parents[] = {
	PLL_SHARED0_DIV3,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_dispaud_bus_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
};
enum clk_id cmucal_mux_clkcmu_fsys_bus_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
};
enum clk_id cmucal_mux_clkcmu_fsys_mmc_embd_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
};
enum clk_id cmucal_mux_clkcmu_peri_bus_parents[] = {
	PLL_SHARED0_DIV4,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_peri_uart_0_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_peri_uart_1_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_peri_usi2_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_peri_spi_0_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_peri_spi_1_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_fsys_mmc_card_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
};
enum clk_id cmucal_mux_clkcmu_cis_clk0_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_cis_clk1_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_cis_clk2_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_peri_usi0_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_peri_usi1_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_cmu_cmuref_parents[] = {
	OSCCLK_CMU,
	DIV_CLK_CMU_CMUREF,
};
enum clk_id cmucal_mux_clk_cmu_cmuref_parents[] = {
	PLL_SHARED0_DIV4,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_apm_bus_parents[] = {
	PLL_SHARED0_DIV4,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_fsys_mmc_sdio_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
};
enum clk_id cmucal_mux_clkcmu_peri_uart_2_parents[] = {
	OSCCLK_CMU,
	PLL_SHARED0_DIV4,
};
enum clk_id cmucal_mux_clkcmu_fsys_usb30drd_parents[] = {
	PLL_SHARED0_DIV4,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_core_cci_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
	PLL_SHARED0_DIV3,
	PLL_SHARED0_DIV3,
};
enum clk_id cmucal_mux_clkcmu_core_g3d_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
	PLL_SHARED0_DIV3,
	PLL_SHARED0_DIV3,
};
enum clk_id cmucal_mux_clkcmu_core_bus_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
	PLL_SHARED0_DIV3,
	PLL_SHARED0_DIV3,
};
enum clk_id cmucal_mux_clkcmu_mif_busp_parents[] = {
	PLL_SHARED0_DIV4,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_cam_bus_parents[] = {
	PLL_SHARED0_DIV3,
	PLL_SHARED1_DIV3,
	PLL_SHARED0_DIV4,
	PLL_SHARED0_DIV5,
};
enum clk_id cmucal_mux_clkcmu_isp_bus_parents[] = {
	PLL_SHARED0_DIV3,
	PLL_SHARED1_DIV3,
	PLL_SHARED0_DIV4,
	MUX_CLK_ISP_LOWFREQ,
};
enum clk_id cmucal_mux_clkcmu_isp_gdc_parents[] = {
	PLL_SHARED0_DIV3,
	PLL_SHARED1_DIV3,
	PLL_SHARED0_DIV4,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_isp_vra_parents[] = {
	PLL_SHARED0_DIV3,
	PLL_SHARED1_DIV3,
	PLL_SHARED0_DIV4,
	PLL_SHARED1_DIV4,
};
enum clk_id cmucal_mux_clkcmu_mif_switch_parents[] = {
	PLL_SHARED0,
	PLL_SHARED1,
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
	PLL_SHARED0_DIV3,
	PLL_SHARED1_DIV3,
	PLL_SHARED0_DIV4,
	PLL_SHARED0_DIV5,
};
enum clk_id cmucal_mux_clkcmu_dispaud_cpu_parents[] = {
	PLL_SHARED0_DIV2,
	PLL_SHARED1_DIV2,
};
enum clk_id cmucal_mux_clk_isp_lowfreq_parents[] = {
	PLL_SHARED1_DIV4,
	PLL_SHARED0_DIV5,
};
enum clk_id cmucal_mux_clk_core_gic_parents[] = {
	DIV_CLK_CORE_BUSP,
	OSCCLK_CORE,
};
enum clk_id cmucal_mux_clk_cpucl0_pll_parents[] = {
	PLL_CPUCL0,
	MUX_CLKCMU_CPUCL0_SWITCH_USER,
};
enum clk_id cmucal_mux_clk_cpucl1_pll_parents[] = {
	PLL_CPUCL1,
	MUX_CLKCMU_CPUCL1_SWITCH_USER,
};
enum clk_id cmucal_mux_clk_cpucl2_pll_parents[] = {
	PLL_CPUCL2,
	MUX_CLKCMU_CPUCL2_SWITCH_USER,
};
enum clk_id cmucal_mux_clk_aud_cpu_parents[] = {
	DIV_CLK_AUD_PLL,
	MUX_CLKCMU_AUD_CPU_USER,
};
enum clk_id cmucal_mux_clk_aud_uaif0_parents[] = {
	DIV_CLK_AUD_UAIF0,
	IOCLK_AUDIOCDCLK0,
};
enum clk_id cmucal_mux_clk_aud_uaif2_parents[] = {
	DIV_CLK_AUD_UAIF2,
	IOCLK_AUDIOCDCLK2,
};
enum clk_id cmucal_mux_clk_aud_uaif3_parents[] = {
	DIV_CLK_AUD_UAIF3,
	IOCLK_AUDIOCDCLK3,
};
enum clk_id cmucal_mux_clk_aud_cpu_hch_parents[] = {
	MUX_CLK_AUD_CPU,
	OSCCLK_DISPAUD,
};
enum clk_id cmucal_mux_clk_aud_fm_parents[] = {
	OSCCLK_DISPAUD,
	DIV_CLK_AUD_FM_SPDY,
};
enum clk_id cmucal_mux_clk_g3d_busd_parents[] = {
	PLL_G3D,
	MUX_CLKCMU_G3D_SWITCH_USER,
};
enum clk_id cmucal_mux_clk_mif_ddrphy_clk2x_parents[] = {
	PLL_MIF,
	CLKCMU_MIF_SWITCH,
};
enum clk_id cmucal_mux_mif_cmuref_parents[] = {
	OSCCLK_MIF,
	MUX_CLKCMU_MIF_BUSP_USER,
};
enum clk_id cmucal_mux_clk_mif1_ddrphy_clk2x_parents[] = {
	PLL_MIF1,
	CLKCMU_MIF_SWITCH,
};
enum clk_id cmucal_mux_mif1_cmuref_parents[] = {
	OSCCLK_MIF1,
	MUX_CLKCMU_MIF1_SWITCH_USER,
};
enum clk_id cmucal_mux_clkcmu_apm_bus_user_parents[] = {
	OSCCLK_APM,
	CLKCMU_APM_BUS,
};
enum clk_id cmucal_mux_clkcmu_cam_bus_user_parents[] = {
	OSCCLK_CAM,
	CLKCMU_CAM_BUS,
};
enum clk_id cmucal_mux_clkcmu_core_bus_user_parents[] = {
	OSCCLK_CORE,
	CLKCMU_CORE_BUS,
};
enum clk_id cmucal_mux_clkcmu_core_cci_user_parents[] = {
	OSCCLK_CORE,
	CLKCMU_CORE_CCI,
};
enum clk_id cmucal_mux_clkcmu_core_g3d_user_parents[] = {
	OSCCLK_CORE,
	CLKCMU_CORE_G3D,
};
enum clk_id cmucal_mux_clkcmu_cpucl0_switch_user_parents[] = {
	OSCCLK_CPUCL0,
	CLKCMU_CPUCL0_SWITCH,
};
enum clk_id cmucal_mux_clkcmu_cpucl0_secjtag_user_parents[] = {
	OSCCLK_CPUCL0,
	CLKCMU_CPUCL0_SECJTAG,
};
enum clk_id cmucal_mux_clkcmu_cpucl1_switch_user_parents[] = {
	OSCCLK_CPUCL1,
	CLKCMU_CPUCL1_SWITCH,
};
enum clk_id cmucal_mux_clkcmu_cpucl2_switch_user_parents[] = {
	OSCCLK_CPUCL2,
	CLKCMU_CPUCL2_SWITCH,
};
enum clk_id cmucal_mux_clkcmu_aud_cpu_user_parents[] = {
	OSCCLK_DISPAUD,
	CLKCMU_DISPAUD_CPU,
};
enum clk_id cmucal_mux_clkcmu_dispaud_bus_user_parents[] = {
	OSCCLK_DISPAUD,
	CLKCMU_DISPAUD_BUS,
};
enum clk_id cmucal_mux_clkcmu_fsys_bus_user_parents[] = {
	OSCCLK_FSYS,
	CLKCMU_FSYS_BUS,
};
enum clk_id cmucal_mux_clkcmu_fsys_mmc_card_user_parents[] = {
	OSCCLK_FSYS,
	CLKCMU_FSYS_MMC_CARD,
};
enum clk_id cmucal_mux_clkcmu_fsys_mmc_embd_user_parents[] = {
	OSCCLK_FSYS,
	CLKCMU_FSYS_MMC_EMBD,
};
enum clk_id cmucal_mux_clkcmu_fsys_mmc_sdio_user_parents[] = {
	OSCCLK_FSYS,
	CLKCMU_FSYS_MMC_SDIO,
};
enum clk_id cmucal_mux_clkcmu_fsys_usb30drd_user_parents[] = {
	OSCCLK_FSYS,
	CLKCMU_FSYS_USB30DRD,
};
enum clk_id cmucal_mux_clkcmu_g3d_switch_user_parents[] = {
	OSCCLK_G3D,
	CLKCMU_G3D_SWITCH,
};
enum clk_id cmucal_mux_clkcmu_isp_vra_user_parents[] = {
	OSCCLK_ISP,
	CLKCMU_ISP_VRA,
};
enum clk_id cmucal_mux_clkcmu_isp_bus_user_parents[] = {
	OSCCLK_ISP,
	CLKCMU_ISP_BUS,
};
enum clk_id cmucal_mux_clkcmu_isp_gdc_user_parents[] = {
	OSCCLK_ISP,
	CLKCMU_ISP_GDC,
};
enum clk_id cmucal_mux_clkcmu_mfcmscl_mscl_user_parents[] = {
	OSCCLK_MFCMSCL,
	CLKCMU_MFCMSCL_MSCL,
};
enum clk_id cmucal_mux_clkcmu_mfcmscl_mfc_user_parents[] = {
	OSCCLK_MFCMSCL,
	CLKCMU_MFCMSCL_MFC,
};
enum clk_id cmucal_mux_clkcmu_mif_busp_user_parents[] = {
	OSCCLK_MIF,
	CLKCMU_MIF_BUSP,
};
enum clk_id cmucal_mux_clkcmu_mif1_switch_user_parents[] = {
	OSCCLK_MIF1,
	CLKCMU_MIF_BUSP,
};
enum clk_id cmucal_mux_clkcmu_peri_bus_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_BUS,
};
enum clk_id cmucal_mux_clkcmu_peri_uart_0_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_UART_0,
};
enum clk_id cmucal_mux_clkcmu_peri_uart_1_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_UART_1,
};
enum clk_id cmucal_mux_clkcmu_peri_usi0_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_USI0,
};
enum clk_id cmucal_mux_clkcmu_peri_usi1_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_USI1,
};
enum clk_id cmucal_mux_clkcmu_peri_usi2_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_USI2,
};
enum clk_id cmucal_mux_clkcmu_peri_spi0_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_SPI_0,
};
enum clk_id cmucal_mux_clkcmu_peri_spi1_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_SPI_1,
};
enum clk_id cmucal_mux_clkcmu_peri_uart_2_user_parents[] = {
	OSCCLK_PERI,
	CLKCMU_PERI_UART_2,
};


/*====================The section of MUXs===================*/
unsigned int cmucal_mux_size = 112;


struct cmucal_mux cmucal_mux_list[] = {
	CLK_MUX(MUX_CLKCMU_MFCMSCL_MSCL, cmucal_mux_clkcmu_mfcmscl_mscl_parents,sizeof(cmucal_mux_clkcmu_mfcmscl_mscl_parents)/sizeof(cmucal_mux_clkcmu_mfcmscl_mscl_parents[0]), CLK_CON_MUX_MUX_CLKCMU_MFCMSCL_MSCL_SELECT, CLK_CON_MUX_MUX_CLKCMU_MFCMSCL_MSCL_BUSY, CLK_CON_MUX_MUX_CLKCMU_MFCMSCL_MSCL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_MFCMSCL_MFC, cmucal_mux_clkcmu_mfcmscl_mfc_parents,sizeof(cmucal_mux_clkcmu_mfcmscl_mfc_parents)/sizeof(cmucal_mux_clkcmu_mfcmscl_mfc_parents[0]), CLK_CON_MUX_MUX_CLKCMU_MFCMSCL_MFC_SELECT, CLK_CON_MUX_MUX_CLKCMU_MFCMSCL_MFC_BUSY, CLK_CON_MUX_MUX_CLKCMU_MFCMSCL_MFC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_DISPAUD_BUS, cmucal_mux_clkcmu_dispaud_bus_parents,sizeof(cmucal_mux_clkcmu_dispaud_bus_parents)/sizeof(cmucal_mux_clkcmu_dispaud_bus_parents[0]), CLK_CON_MUX_MUX_CLKCMU_DISPAUD_BUS_SELECT, CLK_CON_MUX_MUX_CLKCMU_DISPAUD_BUS_BUSY, CLK_CON_MUX_MUX_CLKCMU_DISPAUD_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_BUS, cmucal_mux_clkcmu_fsys_bus_parents,sizeof(cmucal_mux_clkcmu_fsys_bus_parents)/sizeof(cmucal_mux_clkcmu_fsys_bus_parents[0]), CLK_CON_MUX_MUX_CLKCMU_FSYS_BUS_SELECT, CLK_CON_MUX_MUX_CLKCMU_FSYS_BUS_BUSY, CLK_CON_MUX_MUX_CLKCMU_FSYS_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_MMC_EMBD, cmucal_mux_clkcmu_fsys_mmc_embd_parents,sizeof(cmucal_mux_clkcmu_fsys_mmc_embd_parents)/sizeof(cmucal_mux_clkcmu_fsys_mmc_embd_parents[0]), CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_EMBD_SELECT, CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_EMBD_BUSY, CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_EMBD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_BUS, cmucal_mux_clkcmu_peri_bus_parents,sizeof(cmucal_mux_clkcmu_peri_bus_parents)/sizeof(cmucal_mux_clkcmu_peri_bus_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_BUS_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_BUS_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_UART_0, cmucal_mux_clkcmu_peri_uart_0_parents,sizeof(cmucal_mux_clkcmu_peri_uart_0_parents)/sizeof(cmucal_mux_clkcmu_peri_uart_0_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_UART_0_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_UART_0_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_UART_0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_UART_1, cmucal_mux_clkcmu_peri_uart_1_parents,sizeof(cmucal_mux_clkcmu_peri_uart_1_parents)/sizeof(cmucal_mux_clkcmu_peri_uart_1_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_UART_1_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_UART_1_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_UART_1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_USI2, cmucal_mux_clkcmu_peri_usi2_parents,sizeof(cmucal_mux_clkcmu_peri_usi2_parents)/sizeof(cmucal_mux_clkcmu_peri_usi2_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_USI2_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_USI2_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_USI2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_SPI_0, cmucal_mux_clkcmu_peri_spi_0_parents,sizeof(cmucal_mux_clkcmu_peri_spi_0_parents)/sizeof(cmucal_mux_clkcmu_peri_spi_0_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_SPI_0_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_SPI_0_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_SPI_0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_SPI_1, cmucal_mux_clkcmu_peri_spi_1_parents,sizeof(cmucal_mux_clkcmu_peri_spi_1_parents)/sizeof(cmucal_mux_clkcmu_peri_spi_1_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_SPI_1_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_SPI_1_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_SPI_1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_MMC_CARD, cmucal_mux_clkcmu_fsys_mmc_card_parents,sizeof(cmucal_mux_clkcmu_fsys_mmc_card_parents)/sizeof(cmucal_mux_clkcmu_fsys_mmc_card_parents[0]), CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_CARD_SELECT, CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_CARD_BUSY, CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_CARD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CIS_CLK0, cmucal_mux_clkcmu_cis_clk0_parents,sizeof(cmucal_mux_clkcmu_cis_clk0_parents)/sizeof(cmucal_mux_clkcmu_cis_clk0_parents[0]), CLK_CON_MUX_MUX_CLKCMU_CIS_CLK0_SELECT, CLK_CON_MUX_MUX_CLKCMU_CIS_CLK0_BUSY, CLK_CON_MUX_MUX_CLKCMU_CIS_CLK0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CIS_CLK1, cmucal_mux_clkcmu_cis_clk1_parents,sizeof(cmucal_mux_clkcmu_cis_clk1_parents)/sizeof(cmucal_mux_clkcmu_cis_clk1_parents[0]), CLK_CON_MUX_MUX_CLKCMU_CIS_CLK1_SELECT, CLK_CON_MUX_MUX_CLKCMU_CIS_CLK1_BUSY, CLK_CON_MUX_MUX_CLKCMU_CIS_CLK1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CIS_CLK2, cmucal_mux_clkcmu_cis_clk2_parents,sizeof(cmucal_mux_clkcmu_cis_clk2_parents)/sizeof(cmucal_mux_clkcmu_cis_clk2_parents[0]), CLK_CON_MUX_MUX_CLKCMU_CIS_CLK2_SELECT, CLK_CON_MUX_MUX_CLKCMU_CIS_CLK2_BUSY, CLK_CON_MUX_MUX_CLKCMU_CIS_CLK2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_USI0, cmucal_mux_clkcmu_peri_usi0_parents,sizeof(cmucal_mux_clkcmu_peri_usi0_parents)/sizeof(cmucal_mux_clkcmu_peri_usi0_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_USI0_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_USI0_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_USI0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_USI1, cmucal_mux_clkcmu_peri_usi1_parents,sizeof(cmucal_mux_clkcmu_peri_usi1_parents)/sizeof(cmucal_mux_clkcmu_peri_usi1_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_USI1_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_USI1_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_USI1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CMU_CMUREF, cmucal_mux_cmu_cmuref_parents,sizeof(cmucal_mux_cmu_cmuref_parents)/sizeof(cmucal_mux_cmu_cmuref_parents[0]), CLK_CON_MUX_MUX_CMU_CMUREF_SELECT, CLK_CON_MUX_MUX_CMU_CMUREF_BUSY, CLK_CON_MUX_MUX_CMU_CMUREF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_CMU_CMUREF, cmucal_mux_clk_cmu_cmuref_parents,sizeof(cmucal_mux_clk_cmu_cmuref_parents)/sizeof(cmucal_mux_clk_cmu_cmuref_parents[0]), CLK_CON_MUX_MUX_CLK_CMU_CMUREF_SELECT, CLK_CON_MUX_MUX_CLK_CMU_CMUREF_BUSY, CLK_CON_MUX_MUX_CLK_CMU_CMUREF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_APM_BUS, cmucal_mux_clkcmu_apm_bus_parents,sizeof(cmucal_mux_clkcmu_apm_bus_parents)/sizeof(cmucal_mux_clkcmu_apm_bus_parents[0]), CLK_CON_MUX_MUX_CLKCMU_APM_BUS_SELECT, CLK_CON_MUX_MUX_CLKCMU_APM_BUS_BUSY, CLK_CON_MUX_MUX_CLKCMU_APM_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_MMC_SDIO, cmucal_mux_clkcmu_fsys_mmc_sdio_parents,sizeof(cmucal_mux_clkcmu_fsys_mmc_sdio_parents)/sizeof(cmucal_mux_clkcmu_fsys_mmc_sdio_parents[0]), CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_SDIO_SELECT, CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_SDIO_BUSY, CLK_CON_MUX_MUX_CLKCMU_FSYS_MMC_SDIO_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_UART_2, cmucal_mux_clkcmu_peri_uart_2_parents,sizeof(cmucal_mux_clkcmu_peri_uart_2_parents)/sizeof(cmucal_mux_clkcmu_peri_uart_2_parents[0]), CLK_CON_MUX_MUX_CLKCMU_PERI_UART_2_SELECT, CLK_CON_MUX_MUX_CLKCMU_PERI_UART_2_BUSY, CLK_CON_MUX_MUX_CLKCMU_PERI_UART_2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_USB30DRD, cmucal_mux_clkcmu_fsys_usb30drd_parents,sizeof(cmucal_mux_clkcmu_fsys_usb30drd_parents)/sizeof(cmucal_mux_clkcmu_fsys_usb30drd_parents[0]), CLK_CON_MUX_MUX_CLKCMU_FSYS_USB30DRD_SELECT, CLK_CON_MUX_MUX_CLKCMU_FSYS_USB30DRD_BUSY, CLK_CON_MUX_MUX_CLKCMU_FSYS_USB30DRD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CORE_CCI, cmucal_mux_clkcmu_core_cci_parents,sizeof(cmucal_mux_clkcmu_core_cci_parents)/sizeof(cmucal_mux_clkcmu_core_cci_parents[0]), CLK_CON_MUX_MUX_CLKCMU_CORE_CCI_SELECT, CLK_CON_MUX_MUX_CLKCMU_CORE_CCI_BUSY, CLK_CON_MUX_MUX_CLKCMU_CORE_CCI_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CORE_G3D, cmucal_mux_clkcmu_core_g3d_parents,sizeof(cmucal_mux_clkcmu_core_g3d_parents)/sizeof(cmucal_mux_clkcmu_core_g3d_parents[0]), CLK_CON_MUX_MUX_CLKCMU_CORE_G3D_SELECT, CLK_CON_MUX_MUX_CLKCMU_CORE_G3D_BUSY, CLK_CON_MUX_MUX_CLKCMU_CORE_G3D_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CORE_BUS, cmucal_mux_clkcmu_core_bus_parents,sizeof(cmucal_mux_clkcmu_core_bus_parents)/sizeof(cmucal_mux_clkcmu_core_bus_parents[0]), CLK_CON_MUX_MUX_CLKCMU_CORE_BUS_SELECT, CLK_CON_MUX_MUX_CLKCMU_CORE_BUS_BUSY, CLK_CON_MUX_MUX_CLKCMU_CORE_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_MIF_BUSP, cmucal_mux_clkcmu_mif_busp_parents,sizeof(cmucal_mux_clkcmu_mif_busp_parents)/sizeof(cmucal_mux_clkcmu_mif_busp_parents[0]), CLK_CON_MUX_MUX_CLKCMU_MIF_BUSP_SELECT, CLK_CON_MUX_MUX_CLKCMU_MIF_BUSP_BUSY, CLK_CON_MUX_MUX_CLKCMU_MIF_BUSP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CAM_BUS, cmucal_mux_clkcmu_cam_bus_parents,sizeof(cmucal_mux_clkcmu_cam_bus_parents)/sizeof(cmucal_mux_clkcmu_cam_bus_parents[0]), CLK_CON_MUX_MUX_CLKCMU_CAM_BUS_SELECT, CLK_CON_MUX_MUX_CLKCMU_CAM_BUS_BUSY, CLK_CON_MUX_MUX_CLKCMU_CAM_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_ISP_BUS, cmucal_mux_clkcmu_isp_bus_parents,sizeof(cmucal_mux_clkcmu_isp_bus_parents)/sizeof(cmucal_mux_clkcmu_isp_bus_parents[0]), CLK_CON_MUX_MUX_CLKCMU_ISP_BUS_SELECT, CLK_CON_MUX_MUX_CLKCMU_ISP_BUS_BUSY, CLK_CON_MUX_MUX_CLKCMU_ISP_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_ISP_GDC, cmucal_mux_clkcmu_isp_gdc_parents,sizeof(cmucal_mux_clkcmu_isp_gdc_parents)/sizeof(cmucal_mux_clkcmu_isp_gdc_parents[0]), CLK_CON_MUX_MUX_CLKCMU_ISP_GDC_SELECT, CLK_CON_MUX_MUX_CLKCMU_ISP_GDC_BUSY, CLK_CON_MUX_MUX_CLKCMU_ISP_GDC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_ISP_VRA, cmucal_mux_clkcmu_isp_vra_parents,sizeof(cmucal_mux_clkcmu_isp_vra_parents)/sizeof(cmucal_mux_clkcmu_isp_vra_parents[0]), CLK_CON_MUX_MUX_CLKCMU_ISP_VRA_SELECT, CLK_CON_MUX_MUX_CLKCMU_ISP_VRA_BUSY, CLK_CON_MUX_MUX_CLKCMU_ISP_VRA_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_MIF_SWITCH, cmucal_mux_clkcmu_mif_switch_parents,sizeof(cmucal_mux_clkcmu_mif_switch_parents)/sizeof(cmucal_mux_clkcmu_mif_switch_parents[0]), CLK_CON_MUX_MUX_CLKCMU_MIF_SWITCH_SELECT, CLK_CON_MUX_MUX_CLKCMU_MIF_SWITCH_BUSY, CLK_CON_MUX_MUX_CLKCMU_MIF_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_DISPAUD_CPU, cmucal_mux_clkcmu_dispaud_cpu_parents,sizeof(cmucal_mux_clkcmu_dispaud_cpu_parents)/sizeof(cmucal_mux_clkcmu_dispaud_cpu_parents[0]), CLK_CON_MUX_MUX_CLKCMU_DISPAUD_CPU_SELECT, CLK_CON_MUX_MUX_CLKCMU_DISPAUD_CPU_BUSY, CLK_CON_MUX_MUX_CLKCMU_DISPAUD_CPU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_ISP_LOWFREQ, cmucal_mux_clk_isp_lowfreq_parents,sizeof(cmucal_mux_clk_isp_lowfreq_parents)/sizeof(cmucal_mux_clk_isp_lowfreq_parents[0]), CLK_CON_MUX_MUX_CLK_ISP_LOWFREQ_SELECT, CLK_CON_MUX_MUX_CLK_ISP_LOWFREQ_BUSY, CLK_CON_MUX_MUX_CLK_ISP_LOWFREQ_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_CORE_GIC, cmucal_mux_clk_core_gic_parents,sizeof(cmucal_mux_clk_core_gic_parents)/sizeof(cmucal_mux_clk_core_gic_parents[0]), CLK_CON_MUX_MUX_CLK_CORE_GIC_SELECT, CLK_CON_MUX_MUX_CLK_CORE_GIC_BUSY, CLK_CON_MUX_MUX_CLK_CORE_GIC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_CPUCL0_PLL, cmucal_mux_clk_cpucl0_pll_parents,sizeof(cmucal_mux_clk_cpucl0_pll_parents)/sizeof(cmucal_mux_clk_cpucl0_pll_parents[0]), CLK_CON_MUX_MUX_CLK_CPUCL0_PLL_SELECT, CLK_CON_MUX_MUX_CLK_CPUCL0_PLL_BUSY, CLK_CON_MUX_MUX_CLK_CPUCL0_PLL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_CPUCL1_PLL, cmucal_mux_clk_cpucl1_pll_parents,sizeof(cmucal_mux_clk_cpucl1_pll_parents)/sizeof(cmucal_mux_clk_cpucl1_pll_parents[0]), CLK_CON_MUX_MUX_CLK_CPUCL1_PLL_SELECT, CLK_CON_MUX_MUX_CLK_CPUCL1_PLL_BUSY, CLK_CON_MUX_MUX_CLK_CPUCL1_PLL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_CPUCL2_PLL, cmucal_mux_clk_cpucl2_pll_parents,sizeof(cmucal_mux_clk_cpucl2_pll_parents)/sizeof(cmucal_mux_clk_cpucl2_pll_parents[0]), CLK_CON_MUX_MUX_CLK_CPUCL2_PLL_SELECT, CLK_CON_MUX_MUX_CLK_CPUCL2_PLL_BUSY, CLK_CON_MUX_MUX_CLK_CPUCL2_PLL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_AUD_CPU, cmucal_mux_clk_aud_cpu_parents,sizeof(cmucal_mux_clk_aud_cpu_parents)/sizeof(cmucal_mux_clk_aud_cpu_parents[0]), CLK_CON_MUX_MUX_CLK_AUD_CPU_SELECT, CLK_CON_MUX_MUX_CLK_AUD_CPU_BUSY, CLK_CON_MUX_MUX_CLK_AUD_CPU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_AUD_UAIF0, cmucal_mux_clk_aud_uaif0_parents,sizeof(cmucal_mux_clk_aud_uaif0_parents)/sizeof(cmucal_mux_clk_aud_uaif0_parents[0]), CLK_CON_MUX_MUX_CLK_AUD_UAIF0_SELECT, CLK_CON_MUX_MUX_CLK_AUD_UAIF0_BUSY, CLK_CON_MUX_MUX_CLK_AUD_UAIF0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_AUD_UAIF2, cmucal_mux_clk_aud_uaif2_parents,sizeof(cmucal_mux_clk_aud_uaif2_parents)/sizeof(cmucal_mux_clk_aud_uaif2_parents[0]), CLK_CON_MUX_MUX_CLK_AUD_UAIF2_SELECT, CLK_CON_MUX_MUX_CLK_AUD_UAIF2_BUSY, CLK_CON_MUX_MUX_CLK_AUD_UAIF2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_AUD_UAIF3, cmucal_mux_clk_aud_uaif3_parents,sizeof(cmucal_mux_clk_aud_uaif3_parents)/sizeof(cmucal_mux_clk_aud_uaif3_parents[0]), CLK_CON_MUX_MUX_CLK_AUD_UAIF3_SELECT, CLK_CON_MUX_MUX_CLK_AUD_UAIF3_BUSY, CLK_CON_MUX_MUX_CLK_AUD_UAIF3_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_AUD_CPU_HCH, cmucal_mux_clk_aud_cpu_hch_parents,sizeof(cmucal_mux_clk_aud_cpu_hch_parents)/sizeof(cmucal_mux_clk_aud_cpu_hch_parents[0]), CLK_CON_MUX_MUX_CLK_AUD_CPU_HCH_SELECT, CLK_CON_MUX_MUX_CLK_AUD_CPU_HCH_BUSY, CLK_CON_MUX_MUX_CLK_AUD_CPU_HCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_AUD_FM, cmucal_mux_clk_aud_fm_parents,sizeof(cmucal_mux_clk_aud_fm_parents)/sizeof(cmucal_mux_clk_aud_fm_parents[0]), CLK_CON_MUX_MUX_CLK_AUD_FM_SELECT, CLK_CON_MUX_MUX_CLK_AUD_FM_BUSY, CLK_CON_MUX_MUX_CLK_AUD_FM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_G3D_BUSD, cmucal_mux_clk_g3d_busd_parents,sizeof(cmucal_mux_clk_g3d_busd_parents)/sizeof(cmucal_mux_clk_g3d_busd_parents[0]), CLK_CON_MUX_MUX_CLK_G3D_BUSD_SELECT, CLK_CON_MUX_MUX_CLK_G3D_BUSD_BUSY, CLK_CON_MUX_MUX_CLK_G3D_BUSD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_MIF_DDRPHY_CLK2X, cmucal_mux_clk_mif_ddrphy_clk2x_parents,sizeof(cmucal_mux_clk_mif_ddrphy_clk2x_parents)/sizeof(cmucal_mux_clk_mif_ddrphy_clk2x_parents[0]), CLK_CON_MUX_MUX_CLK_MIF_DDRPHY_CLK2X_SELECT, CLK_CON_MUX_MUX_CLK_MIF_DDRPHY_CLK2X_BUSY, CLK_CON_MUX_MUX_CLK_MIF_DDRPHY_CLK2X_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_MIF_CMUREF, cmucal_mux_mif_cmuref_parents,sizeof(cmucal_mux_mif_cmuref_parents)/sizeof(cmucal_mux_mif_cmuref_parents[0]), CLK_CON_MUX_MUX_MIF_CMUREF_SELECT, CLK_CON_MUX_MUX_MIF_CMUREF_BUSY, CLK_CON_MUX_MUX_MIF_CMUREF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLK_MIF1_DDRPHY_CLK2X, cmucal_mux_clk_mif1_ddrphy_clk2x_parents,sizeof(cmucal_mux_clk_mif1_ddrphy_clk2x_parents)/sizeof(cmucal_mux_clk_mif1_ddrphy_clk2x_parents[0]), CLK_CON_MUX_MUX_CLK_MIF1_DDRPHY_CLK2X_SELECT, CLK_CON_MUX_MUX_CLK_MIF1_DDRPHY_CLK2X_BUSY, CLK_CON_MUX_MUX_CLK_MIF1_DDRPHY_CLK2X_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_MIF1_CMUREF, cmucal_mux_mif1_cmuref_parents,sizeof(cmucal_mux_mif1_cmuref_parents)/sizeof(cmucal_mux_mif1_cmuref_parents[0]), CLK_CON_MUX_MUX_MIF1_CMUREF_SELECT, CLK_CON_MUX_MUX_MIF1_CMUREF_BUSY, CLK_CON_MUX_MUX_MIF1_CMUREF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(APM_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_APM_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_APM_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_APM_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(APM_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_APM_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_APM_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_APM_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CAM_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_CAM_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_CAM_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_CAM_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CAM_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_CAM_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_CAM_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_CAM_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CMU_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_CMU_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_CMU_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_CMU_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CMU_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_CMU_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_CMU_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_CMU_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CORE_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_CORE_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_CORE_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_CORE_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CORE_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_CORE_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_CORE_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_CORE_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CPUCL0_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_CPUCL0_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_CPUCL0_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_CPUCL0_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CPUCL0_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_CPUCL0_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_CPUCL0_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_CPUCL0_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CPUCL1_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_CPUCL1_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_CPUCL1_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_CPUCL1_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CPUCL1_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_CPUCL1_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_CPUCL1_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_CPUCL1_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CPUCL2_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_CPUCL2_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_CPUCL2_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_CPUCL2_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(CPUCL2_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_CPUCL2_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_CPUCL2_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_CPUCL2_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(DISPAUD_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_DISPAUD_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_DISPAUD_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_DISPAUD_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(DISPAUD_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_DISPAUD_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_DISPAUD_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_DISPAUD_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(FSYS_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_FSYS_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_FSYS_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_FSYS_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(FSYS_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_FSYS_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_FSYS_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_FSYS_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(G3D_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_G3D_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_G3D_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_G3D_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(G3D_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_G3D_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_G3D_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_G3D_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(ISP_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_ISP_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_ISP_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_ISP_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(ISP_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_ISP_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_ISP_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_ISP_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MFCMSCL_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_MFCMSCL_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_MFCMSCL_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_MFCMSCL_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MFCMSCL_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_MFCMSCL_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_MFCMSCL_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_MFCMSCL_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MIF_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_MIF_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_MIF_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_MIF_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MIF_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_MIF_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_MIF_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_MIF_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MIF1_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_MIF1_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_MIF1_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_MIF1_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MIF1_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_MIF1_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_MIF1_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_MIF1_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(PERI_CMU_CLKOUT0, NULL, 0, CLKOUT_CON_BLK_PERI_CMU_CLKOUT0_SELECT, CLKOUT_CON_BLK_PERI_CMU_CLKOUT0_BUSY, CLKOUT_CON_BLK_PERI_CMU_CLKOUT0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(PERI_CMU_CLKOUT1, NULL, 0, CLKOUT_CON_BLK_PERI_CMU_CLKOUT1_SELECT, CLKOUT_CON_BLK_PERI_CMU_CLKOUT1_BUSY, CLKOUT_CON_BLK_PERI_CMU_CLKOUT1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_APM_BUS_USER, cmucal_mux_clkcmu_apm_bus_user_parents,sizeof(cmucal_mux_clkcmu_apm_bus_user_parents)/sizeof(cmucal_mux_clkcmu_apm_bus_user_parents[0]), PLL_CON0_MUX_CLKCMU_APM_BUS_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_APM_BUS_USER_BUSY, PLL_CON2_MUX_CLKCMU_APM_BUS_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CAM_BUS_USER, cmucal_mux_clkcmu_cam_bus_user_parents,sizeof(cmucal_mux_clkcmu_cam_bus_user_parents)/sizeof(cmucal_mux_clkcmu_cam_bus_user_parents[0]), PLL_CON0_MUX_CLKCMU_CAM_BUS_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_CAM_BUS_USER_BUSY, PLL_CON2_MUX_CLKCMU_CAM_BUS_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CORE_BUS_USER, cmucal_mux_clkcmu_core_bus_user_parents,sizeof(cmucal_mux_clkcmu_core_bus_user_parents)/sizeof(cmucal_mux_clkcmu_core_bus_user_parents[0]), PLL_CON0_MUX_CLKCMU_CORE_BUS_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_CORE_BUS_USER_BUSY, PLL_CON2_MUX_CLKCMU_CORE_BUS_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CORE_CCI_USER, cmucal_mux_clkcmu_core_cci_user_parents,sizeof(cmucal_mux_clkcmu_core_cci_user_parents)/sizeof(cmucal_mux_clkcmu_core_cci_user_parents[0]), PLL_CON0_MUX_CLKCMU_CORE_CCI_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_CORE_CCI_USER_BUSY, PLL_CON2_MUX_CLKCMU_CORE_CCI_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CORE_G3D_USER, cmucal_mux_clkcmu_core_g3d_user_parents,sizeof(cmucal_mux_clkcmu_core_g3d_user_parents)/sizeof(cmucal_mux_clkcmu_core_g3d_user_parents[0]), PLL_CON0_MUX_CLKCMU_CORE_G3D_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_CORE_G3D_USER_BUSY, PLL_CON2_MUX_CLKCMU_CORE_G3D_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CPUCL0_SWITCH_USER, cmucal_mux_clkcmu_cpucl0_switch_user_parents,sizeof(cmucal_mux_clkcmu_cpucl0_switch_user_parents)/sizeof(cmucal_mux_clkcmu_cpucl0_switch_user_parents[0]), PLL_CON0_MUX_CLKCMU_CPUCL0_SWITCH_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_CPUCL0_SWITCH_USER_BUSY, PLL_CON2_MUX_CLKCMU_CPUCL0_SWITCH_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CPUCL0_SECJTAG_USER, cmucal_mux_clkcmu_cpucl0_secjtag_user_parents,sizeof(cmucal_mux_clkcmu_cpucl0_secjtag_user_parents)/sizeof(cmucal_mux_clkcmu_cpucl0_secjtag_user_parents[0]), PLL_CON0_MUX_CLKCMU_CPUCL0_SECJTAG_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_CPUCL0_SECJTAG_USER_BUSY, PLL_CON2_MUX_CLKCMU_CPUCL0_SECJTAG_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CPUCL1_SWITCH_USER, cmucal_mux_clkcmu_cpucl1_switch_user_parents,sizeof(cmucal_mux_clkcmu_cpucl1_switch_user_parents)/sizeof(cmucal_mux_clkcmu_cpucl1_switch_user_parents[0]), PLL_CON0_MUX_CLKCMU_CPUCL1_SWITCH_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_CPUCL1_SWITCH_USER_BUSY, PLL_CON2_MUX_CLKCMU_CPUCL1_SWITCH_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_CPUCL2_SWITCH_USER, cmucal_mux_clkcmu_cpucl2_switch_user_parents,sizeof(cmucal_mux_clkcmu_cpucl2_switch_user_parents)/sizeof(cmucal_mux_clkcmu_cpucl2_switch_user_parents[0]), PLL_CON0_MUX_CLKCMU_CPUCL2_SWITCH_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_CPUCL2_SWITCH_USER_BUSY, PLL_CON2_MUX_CLKCMU_CPUCL2_SWITCH_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_AUD_CPU_USER, cmucal_mux_clkcmu_aud_cpu_user_parents,sizeof(cmucal_mux_clkcmu_aud_cpu_user_parents)/sizeof(cmucal_mux_clkcmu_aud_cpu_user_parents[0]), PLL_CON0_MUX_CLKCMU_AUD_CPU_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_AUD_CPU_USER_BUSY, PLL_CON2_MUX_CLKCMU_AUD_CPU_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_DISPAUD_BUS_USER, cmucal_mux_clkcmu_dispaud_bus_user_parents,sizeof(cmucal_mux_clkcmu_dispaud_bus_user_parents)/sizeof(cmucal_mux_clkcmu_dispaud_bus_user_parents[0]), PLL_CON0_MUX_CLKCMU_DISPAUD_BUS_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_DISPAUD_BUS_USER_BUSY, PLL_CON2_MUX_CLKCMU_DISPAUD_BUS_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_BUS_USER, cmucal_mux_clkcmu_fsys_bus_user_parents,sizeof(cmucal_mux_clkcmu_fsys_bus_user_parents)/sizeof(cmucal_mux_clkcmu_fsys_bus_user_parents[0]), PLL_CON0_MUX_CLKCMU_FSYS_BUS_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_FSYS_BUS_USER_BUSY, PLL_CON2_MUX_CLKCMU_FSYS_BUS_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_MMC_CARD_USER, cmucal_mux_clkcmu_fsys_mmc_card_user_parents,sizeof(cmucal_mux_clkcmu_fsys_mmc_card_user_parents)/sizeof(cmucal_mux_clkcmu_fsys_mmc_card_user_parents[0]), PLL_CON0_MUX_CLKCMU_FSYS_MMC_CARD_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_FSYS_MMC_CARD_USER_BUSY, PLL_CON2_MUX_CLKCMU_FSYS_MMC_CARD_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_MMC_EMBD_USER, cmucal_mux_clkcmu_fsys_mmc_embd_user_parents,sizeof(cmucal_mux_clkcmu_fsys_mmc_embd_user_parents)/sizeof(cmucal_mux_clkcmu_fsys_mmc_embd_user_parents[0]), PLL_CON0_MUX_CLKCMU_FSYS_MMC_EMBD_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_FSYS_MMC_EMBD_USER_BUSY, PLL_CON2_MUX_CLKCMU_FSYS_MMC_EMBD_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_MMC_SDIO_USER, cmucal_mux_clkcmu_fsys_mmc_sdio_user_parents,sizeof(cmucal_mux_clkcmu_fsys_mmc_sdio_user_parents)/sizeof(cmucal_mux_clkcmu_fsys_mmc_sdio_user_parents[0]), PLL_CON0_MUX_CLKCMU_FSYS_MMC_SDIO_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_FSYS_MMC_SDIO_USER_BUSY, PLL_CON2_MUX_CLKCMU_FSYS_MMC_SDIO_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_FSYS_USB30DRD_USER, cmucal_mux_clkcmu_fsys_usb30drd_user_parents,sizeof(cmucal_mux_clkcmu_fsys_usb30drd_user_parents)/sizeof(cmucal_mux_clkcmu_fsys_usb30drd_user_parents[0]), PLL_CON0_MUX_CLKCMU_FSYS_USB30DRD_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_FSYS_USB30DRD_USER_BUSY, PLL_CON2_MUX_CLKCMU_FSYS_USB30DRD_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_G3D_SWITCH_USER, cmucal_mux_clkcmu_g3d_switch_user_parents,sizeof(cmucal_mux_clkcmu_g3d_switch_user_parents)/sizeof(cmucal_mux_clkcmu_g3d_switch_user_parents[0]), PLL_CON0_MUX_CLKCMU_G3D_SWITCH_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_G3D_SWITCH_USER_BUSY, PLL_CON2_MUX_CLKCMU_G3D_SWITCH_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_ISP_VRA_USER, cmucal_mux_clkcmu_isp_vra_user_parents,sizeof(cmucal_mux_clkcmu_isp_vra_user_parents)/sizeof(cmucal_mux_clkcmu_isp_vra_user_parents[0]), PLL_CON0_MUX_CLKCMU_ISP_VRA_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_ISP_VRA_USER_BUSY, PLL_CON2_MUX_CLKCMU_ISP_VRA_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_ISP_BUS_USER, cmucal_mux_clkcmu_isp_bus_user_parents,sizeof(cmucal_mux_clkcmu_isp_bus_user_parents)/sizeof(cmucal_mux_clkcmu_isp_bus_user_parents[0]), PLL_CON0_MUX_CLKCMU_ISP_BUS_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_ISP_BUS_USER_BUSY, PLL_CON2_MUX_CLKCMU_ISP_BUS_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_ISP_GDC_USER, cmucal_mux_clkcmu_isp_gdc_user_parents,sizeof(cmucal_mux_clkcmu_isp_gdc_user_parents)/sizeof(cmucal_mux_clkcmu_isp_gdc_user_parents[0]), PLL_CON0_MUX_CLKCMU_ISP_GDC_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_ISP_GDC_USER_BUSY, PLL_CON2_MUX_CLKCMU_ISP_GDC_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_MFCMSCL_MSCL_USER, cmucal_mux_clkcmu_mfcmscl_mscl_user_parents,sizeof(cmucal_mux_clkcmu_mfcmscl_mscl_user_parents)/sizeof(cmucal_mux_clkcmu_mfcmscl_mscl_user_parents[0]), PLL_CON0_MUX_CLKCMU_MFCMSCL_MSCL_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_MFCMSCL_MSCL_USER_BUSY, PLL_CON2_MUX_CLKCMU_MFCMSCL_MSCL_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_MFCMSCL_MFC_USER, cmucal_mux_clkcmu_mfcmscl_mfc_user_parents,sizeof(cmucal_mux_clkcmu_mfcmscl_mfc_user_parents)/sizeof(cmucal_mux_clkcmu_mfcmscl_mfc_user_parents[0]), PLL_CON0_MUX_CLKCMU_MFCMSCL_MFC_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_MFCMSCL_MFC_USER_BUSY, PLL_CON2_MUX_CLKCMU_MFCMSCL_MFC_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_MIF_BUSP_USER, cmucal_mux_clkcmu_mif_busp_user_parents,sizeof(cmucal_mux_clkcmu_mif_busp_user_parents)/sizeof(cmucal_mux_clkcmu_mif_busp_user_parents[0]), PLL_CON0_MUX_CLKCMU_MIF_BUSP_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_MIF_BUSP_USER_BUSY, PLL_CON2_MUX_CLKCMU_MIF_BUSP_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_MIF1_SWITCH_USER, cmucal_mux_clkcmu_mif1_switch_user_parents,sizeof(cmucal_mux_clkcmu_mif1_switch_user_parents)/sizeof(cmucal_mux_clkcmu_mif1_switch_user_parents[0]), PLL_CON0_MUX_CLKCMU_MIF1_SWITCH_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_MIF1_SWITCH_USER_BUSY, PLL_CON2_MUX_CLKCMU_MIF1_SWITCH_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_BUS_USER, cmucal_mux_clkcmu_peri_bus_user_parents,sizeof(cmucal_mux_clkcmu_peri_bus_user_parents)/sizeof(cmucal_mux_clkcmu_peri_bus_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_BUS_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_BUS_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_BUS_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_UART_0_USER, cmucal_mux_clkcmu_peri_uart_0_user_parents,sizeof(cmucal_mux_clkcmu_peri_uart_0_user_parents)/sizeof(cmucal_mux_clkcmu_peri_uart_0_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_UART_0_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_UART_0_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_UART_0_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_UART_1_USER, cmucal_mux_clkcmu_peri_uart_1_user_parents,sizeof(cmucal_mux_clkcmu_peri_uart_1_user_parents)/sizeof(cmucal_mux_clkcmu_peri_uart_1_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_UART_1_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_UART_1_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_UART_1_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_USI0_USER, cmucal_mux_clkcmu_peri_usi0_user_parents,sizeof(cmucal_mux_clkcmu_peri_usi0_user_parents)/sizeof(cmucal_mux_clkcmu_peri_usi0_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_USI0_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_USI0_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_USI0_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_USI1_USER, cmucal_mux_clkcmu_peri_usi1_user_parents,sizeof(cmucal_mux_clkcmu_peri_usi1_user_parents)/sizeof(cmucal_mux_clkcmu_peri_usi1_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_USI1_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_USI1_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_USI1_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_USI2_USER, cmucal_mux_clkcmu_peri_usi2_user_parents,sizeof(cmucal_mux_clkcmu_peri_usi2_user_parents)/sizeof(cmucal_mux_clkcmu_peri_usi2_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_USI2_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_USI2_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_USI2_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_SPI0_USER, cmucal_mux_clkcmu_peri_spi0_user_parents,sizeof(cmucal_mux_clkcmu_peri_spi0_user_parents)/sizeof(cmucal_mux_clkcmu_peri_spi0_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_SPI0_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_SPI0_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_SPI0_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_SPI1_USER, cmucal_mux_clkcmu_peri_spi1_user_parents,sizeof(cmucal_mux_clkcmu_peri_spi1_user_parents)/sizeof(cmucal_mux_clkcmu_peri_spi1_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_SPI1_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_SPI1_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_SPI1_USER_ENABLE_AUTOMATIC_CLKGATING),
	CLK_MUX(MUX_CLKCMU_PERI_UART_2_USER, cmucal_mux_clkcmu_peri_uart_2_user_parents,sizeof(cmucal_mux_clkcmu_peri_uart_2_user_parents)/sizeof(cmucal_mux_clkcmu_peri_uart_2_user_parents[0]), PLL_CON0_MUX_CLKCMU_PERI_UART_2_USER_MUX_SEL, PLL_CON0_MUX_CLKCMU_PERI_UART_2_USER_BUSY, PLL_CON2_MUX_CLKCMU_PERI_UART_2_USER_ENABLE_AUTOMATIC_CLKGATING),
};

/*====================The section of DIVs===================*/
unsigned int cmucal_div_size = 83;


struct cmucal_div cmucal_div_list[] = {
	CLK_DIV(DIV_CLK_APM_I2C, OSCCLK_APM, CLK_CON_DIV_DIV_CLK_APM_I2C_DIVRATIO, CLK_CON_DIV_DIV_CLK_APM_I2C_BUSY, CLK_CON_DIV_DIV_CLK_APM_I2C_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CAM_BUSP, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_DIV_DIV_CLK_CAM_BUSP_DIVRATIO, CLK_CON_DIV_DIV_CLK_CAM_BUSP_BUSY, CLK_CON_DIV_DIV_CLK_CAM_BUSP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CPUCL1_SWITCH, GATE_CLKCMU_CPUCL1_SWITCH, CLK_CON_DIV_CLKCMU_CPUCL1_SWITCH_DIVRATIO, CLK_CON_DIV_CLKCMU_CPUCL1_SWITCH_BUSY, CLK_CON_DIV_CLKCMU_CPUCL1_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_G3D_SWITCH, GATE_CLKCMU_G3D_SWITCH, CLK_CON_DIV_CLKCMU_G3D_SWITCH_DIVRATIO, CLK_CON_DIV_CLKCMU_G3D_SWITCH_BUSY, CLK_CON_DIV_CLKCMU_G3D_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_ISP_BUS, GATE_CLKCMU_ISP_BUS, CLK_CON_DIV_CLKCMU_ISP_BUS_DIVRATIO, CLK_CON_DIV_CLKCMU_ISP_BUS_BUSY, CLK_CON_DIV_CLKCMU_ISP_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CAM_BUS, GATE_CLKCMU_CAM_BUS, CLK_CON_DIV_CLKCMU_CAM_BUS_DIVRATIO, CLK_CON_DIV_CLKCMU_CAM_BUS_BUSY, CLK_CON_DIV_CLKCMU_CAM_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_DISPAUD_BUS, GATE_CLKCMU_DISPAUD_BUS, CLK_CON_DIV_CLKCMU_DISPAUD_BUS_DIVRATIO, CLK_CON_DIV_CLKCMU_DISPAUD_BUS_BUSY, CLK_CON_DIV_CLKCMU_DISPAUD_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_FSYS_BUS, GATE_CLKCMU_FSYS_BUS, CLK_CON_DIV_CLKCMU_FSYS_BUS_DIVRATIO, CLK_CON_DIV_CLKCMU_FSYS_BUS_BUSY, CLK_CON_DIV_CLKCMU_FSYS_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CPUCL0_SWITCH, GATE_CLKCMU_CPUCL0_SWITCH, CLK_CON_DIV_CLKCMU_CPUCL0_SWITCH_DIVRATIO, CLK_CON_DIV_CLKCMU_CPUCL0_SWITCH_BUSY, CLK_CON_DIV_CLKCMU_CPUCL0_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_MFCMSCL_MSCL, GATE_CLKCMU_MFCMSCL_MSCL, CLK_CON_DIV_CLKCMU_MFCMSCL_MSCL_DIVRATIO, CLK_CON_DIV_CLKCMU_MFCMSCL_MSCL_BUSY, CLK_CON_DIV_CLKCMU_MFCMSCL_MSCL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_MFCMSCL_MFC, GATE_CLKCMU_MFCMSCL_MFC, CLK_CON_DIV_CLKCMU_MFCMSCL_MFC_DIVRATIO, CLK_CON_DIV_CLKCMU_MFCMSCL_MFC_BUSY, CLK_CON_DIV_CLKCMU_MFCMSCL_MFC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_ISP_GDC, GATE_CLKCMU_ISP_GDC, CLK_CON_DIV_CLKCMU_ISP_GDC_DIVRATIO, CLK_CON_DIV_CLKCMU_ISP_GDC_BUSY, CLK_CON_DIV_CLKCMU_ISP_GDC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(AP2CP_SHARED0_PLL_CLK, GATE_CLKCMU_MODEM_SHARED0, CLK_CON_DIV_AP2CP_SHARED0_PLL_CLK_DIVRATIO, CLK_CON_DIV_AP2CP_SHARED0_PLL_CLK_BUSY, CLK_CON_DIV_AP2CP_SHARED0_PLL_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_BUS, GATE_CLKCMU_PERI_BUS, CLK_CON_DIV_CLKCMU_PERI_BUS_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_BUS_BUSY, CLK_CON_DIV_CLKCMU_PERI_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_UART_0, GATE_CLKCMU_PERI_UART_0, CLK_CON_DIV_CLKCMU_PERI_UART_0_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_UART_0_BUSY, CLK_CON_DIV_CLKCMU_PERI_UART_0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_UART_1, GATE_CLKCMUC_PERI_UART_1, CLK_CON_DIV_CLKCMU_PERI_UART_1_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_UART_1_BUSY, CLK_CON_DIV_CLKCMU_PERI_UART_1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_USI2, GATE_CLKCMU_PERI_USI2, CLK_CON_DIV_CLKCMU_PERI_USI2_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_USI2_BUSY, CLK_CON_DIV_CLKCMU_PERI_USI2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_SPI_0, GATE_CLKCMU_PERI_SPI_0, CLK_CON_DIV_CLKCMU_PERI_SPI_0_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_SPI_0_BUSY, CLK_CON_DIV_CLKCMU_PERI_SPI_0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_SPI_1, GATE_CLKCMU_PERI_SPI_1, CLK_CON_DIV_CLKCMU_PERI_SPI_1_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_SPI_1_BUSY, CLK_CON_DIV_CLKCMU_PERI_SPI_1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_APM_BUS, GATE_CLKCMU_APM_BUS, CLK_CON_DIV_CLKCMU_APM_BUS_DIVRATIO, CLK_CON_DIV_CLKCMU_APM_BUS_BUSY, CLK_CON_DIV_CLKCMU_APM_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_FSYS_MMC_CARD, GATE_CLKCMU_FSYS_MMC_CARD, CLK_CON_DIV_CLKCMU_FSYS_MMC_CARD_DIVRATIO, CLK_CON_DIV_CLKCMU_FSYS_MMC_CARD_BUSY, CLK_CON_DIV_CLKCMU_FSYS_MMC_CARD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CIS_CLK0, GATE_CLKCMU_CIS_CLK0, CLK_CON_DIV_CLKCMU_CIS_CLK0_DIVRATIO, CLK_CON_DIV_CLKCMU_CIS_CLK0_BUSY, CLK_CON_DIV_CLKCMU_CIS_CLK0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CIS_CLK1, GATE_CLKCMU_CIS_CLK1, CLK_CON_DIV_CLKCMU_CIS_CLK1_DIVRATIO, CLK_CON_DIV_CLKCMU_CIS_CLK1_BUSY, CLK_CON_DIV_CLKCMU_CIS_CLK1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CIS_CLK2, GATE_CLKCMU_CIS_CLK2, CLK_CON_DIV_CLKCMU_CIS_CLK2_DIVRATIO, CLK_CON_DIV_CLKCMU_CIS_CLK2_BUSY, CLK_CON_DIV_CLKCMU_CIS_CLK2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_FSYS_MMC_EMBD, GATE_CLKCMU_FSYS_MMC_EMBD, CLK_CON_DIV_CLKCMU_FSYS_MMC_EMBD_DIVRATIO, CLK_CON_DIV_CLKCMU_FSYS_MMC_EMBD_BUSY, CLK_CON_DIV_CLKCMU_FSYS_MMC_EMBD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_USI0, GATE_CLKCMU_PERI_USI0, CLK_CON_DIV_CLKCMU_PERI_USI0_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_USI0_BUSY, CLK_CON_DIV_CLKCMU_PERI_USI0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_USI1, GATE_CLKCMU_PERI_USI1, CLK_CON_DIV_CLKCMU_PERI_USI1_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_USI1_BUSY, CLK_CON_DIV_CLKCMU_PERI_USI1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(AP2CP_SHARED1_PLL_CLK, GATE_CLKCMU_MODEM_SHARED1, CLK_CON_DIV_AP2CP_SHARED1_PLL_CLK_DIVRATIO, CLK_CON_DIV_AP2CP_SHARED1_PLL_CLK_BUSY, CLK_CON_DIV_AP2CP_SHARED1_PLL_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CMU_CMUREF, MUX_CLK_CMU_CMUREF, CLK_CON_DIV_DIV_CLK_CMU_CMUREF_DIVRATIO, CLK_CON_DIV_DIV_CLK_CMU_CMUREF_BUSY, CLK_CON_DIV_DIV_CLK_CMU_CMUREF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_DISPAUD_CPU, GATE_CLKCMU_DISPAUD_VCLK, CLK_CON_DIV_CLKCMU_DISPAUD_CPU_DIVRATIO, CLK_CON_DIV_CLKCMU_DISPAUD_CPU_BUSY, CLK_CON_DIV_CLKCMU_DISPAUD_CPU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_ISP_VRA, GATE_CLKCMU_ISP_VRA, CLK_CON_DIV_CLKCMU_ISP_VRA_DIVRATIO, CLK_CON_DIV_CLKCMU_ISP_VRA_BUSY, CLK_CON_DIV_CLKCMU_ISP_VRA_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_FSYS_MMC_SDIO, GATE_CLKCMU_FSYS_MMC_SDIO, CLK_CON_DIV_CLKCMU_FSYS_MMC_SDIO_DIVRATIO, CLK_CON_DIV_CLKCMU_FSYS_MMC_SDIO_BUSY, CLK_CON_DIV_CLKCMU_FSYS_MMC_SDIO_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CORE_BUS, GATE_CLKCMU_CORE_BUS, CLK_CON_DIV_CLKCMU_CORE_BUS_DIVRATIO, CLK_CON_DIV_CLKCMU_CORE_BUS_BUSY, CLK_CON_DIV_CLKCMU_CORE_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_PERI_UART_2, GATE_CLKCMU_PERI_UART_2, CLK_CON_DIV_CLKCMU_PERI_UART_2_DIVRATIO, CLK_CON_DIV_CLKCMU_PERI_UART_2_BUSY, CLK_CON_DIV_CLKCMU_PERI_UART_2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(PLL_SHARED0_DIV3, PLL_SHARED0, CLK_CON_DIV_PLL_SHARED0_DIV3_DIVRATIO, CLK_CON_DIV_PLL_SHARED0_DIV3_BUSY, CLK_CON_DIV_PLL_SHARED0_DIV3_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CPUCL0_SECJTAG, GATE_CLKCMU_CPUCL0_SECJTAG, CLK_CON_DIV_CLKCMU_CPUCL0_SECJTAG_DIVRATIO, CLK_CON_DIV_CLKCMU_CPUCL0_SECJTAG_BUSY, CLK_CON_DIV_CLKCMU_CPUCL0_SECJTAG_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(PLL_SHARED0_DIV2, PLL_SHARED0, CLK_CON_DIV_PLL_SHARED0_DIV2_DIVRATIO, CLK_CON_DIV_PLL_SHARED0_DIV2_BUSY, CLK_CON_DIV_PLL_SHARED0_DIV2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(PLL_SHARED0_DIV4, PLL_SHARED0_DIV2, CLK_CON_DIV_PLL_SHARED0_DIV4_DIVRATIO, CLK_CON_DIV_PLL_SHARED0_DIV4_BUSY, CLK_CON_DIV_PLL_SHARED0_DIV4_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(PLL_SHARED1_DIV2, PLL_SHARED1, CLK_CON_DIV_PLL_SHARED1_DIV2_DIVRATIO, CLK_CON_DIV_PLL_SHARED1_DIV2_BUSY, CLK_CON_DIV_PLL_SHARED1_DIV2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(PLL_SHARED1_DIV4, PLL_SHARED1_DIV2, CLK_CON_DIV_PLL_SHARED1_DIV4_DIVRATIO, CLK_CON_DIV_PLL_SHARED1_DIV4_BUSY, CLK_CON_DIV_PLL_SHARED1_DIV4_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CORE_CCI, GATE_CLKCMU_CORE_CCI, CLK_CON_DIV_CLKCMU_CORE_CCI_DIVRATIO, CLK_CON_DIV_CLKCMU_CORE_CCI_BUSY, CLK_CON_DIV_CLKCMU_CORE_CCI_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CPUCL2_SWITCH, GATE_CLKCMU_CPUCL2_SWITCH, CLK_CON_DIV_CLKCMU_CPUCL2_SWITCH_DIVRATIO, CLK_CON_DIV_CLKCMU_CPUCL2_SWITCH_BUSY, CLK_CON_DIV_CLKCMU_CPUCL2_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_FSYS_USB30DRD, GATE_CLKCMU_FSYS_USB30DRD, CLK_CON_DIV_CLKCMU_FSYS_USB30DRD_DIVRATIO, CLK_CON_DIV_CLKCMU_FSYS_USB30DRD_BUSY, CLK_CON_DIV_CLKCMU_FSYS_USB30DRD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_CORE_G3D, GATE_CLKCMU_CORE_G3D, CLK_CON_DIV_CLKCMU_CORE_G3D_DIVRATIO, CLK_CON_DIV_CLKCMU_CORE_G3D_BUSY, CLK_CON_DIV_CLKCMU_CORE_G3D_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(CLKCMU_MIF_BUSP, GATE_CLKCMU_MIF_BUSP, CLK_CON_DIV_CLKCMU_MIF_BUSP_DIVRATIO, CLK_CON_DIV_CLKCMU_MIF_BUSP_BUSY, CLK_CON_DIV_CLKCMU_MIF_BUSP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(PLL_SHARED0_DIV5, PLL_SHARED0, CLK_CON_DIV_PLL_SHARED0_DIV5_DIVRATIO, CLK_CON_DIV_PLL_SHARED0_DIV5_BUSY, CLK_CON_DIV_PLL_SHARED0_DIV5_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(PLL_SHARED1_DIV3, PLL_SHARED1, CLK_CON_DIV_PLL_SHARED1_DIV3_DIVRATIO, CLK_CON_DIV_PLL_SHARED1_DIV3_BUSY, CLK_CON_DIV_PLL_SHARED1_DIV3_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CORE_BUSP, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_DIV_DIV_CLK_CORE_BUSP_DIVRATIO, CLK_CON_DIV_DIV_CLK_CORE_BUSP_BUSY, CLK_CON_DIV_DIV_CLK_CORE_BUSP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL0_PCLK, DIV_CLK_CPUCL0_CPU, CLK_CON_DIV_DIV_CLK_CPUCL0_PCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL0_PCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL0_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL0_CMUREF, DIV_CLK_CPUCL0_CPU, CLK_CON_DIV_DIV_CLK_CPUCL0_CMUREF_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL0_CMUREF_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL0_CMUREF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL0_ACLK, DIV_CLK_CPUCL0_CPU, CLK_CON_DIV_DIV_CLK_CPUCL0_ACLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL0_ACLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL0_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL0_ATCLK, DIV_CLK_CPUCL0_CPU, CLK_CON_DIV_DIV_CLK_CPUCL0_ATCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL0_ATCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL0_ATCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL0_CNTCLK, DIV_CLK_CPUCL0_CPU, CLK_CON_DIV_DIV_CLK_CPUCL0_CNTCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL0_CNTCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL0_CNTCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL0_PCLKDBG, DIV_CLK_CPUCL0_CPU, CLK_CON_DIV_DIV_CLK_CPUCL0_PCLKDBG_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL0_PCLKDBG_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL0_PCLKDBG_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL0_CPU, MUX_CLK_CPUCL0_PLL, CLK_CON_DIV_DIV_CLK_CPUCL0_CPU_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL0_CPU_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL0_CPU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL1_PCLK, DIV_CLK_CPUCL1_CPU, CLK_CON_DIV_DIV_CLK_CPUCL1_PCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL1_PCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL1_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL1_CMUREF, DIV_CLK_CPUCL1_CPU, CLK_CON_DIV_DIV_CLK_CPUCL1_CMUREF_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL1_CMUREF_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL1_CMUREF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL1_ACLK, DIV_CLK_CPUCL1_CPU, CLK_CON_DIV_DIV_CLK_CPUCL1_ACLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL1_ACLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL1_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL1_ATCLK, DIV_CLK_CPUCL1_CPU, CLK_CON_DIV_DIV_CLK_CPUCL1_ATCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL1_ATCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL1_ATCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL1_PCLKDBG, DIV_CLK_CPUCL1_CPU, CLK_CON_DIV_DIV_CLK_CPUCL1_PCLKDBG_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL1_PCLKDBG_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL1_PCLKDBG_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL1_CPU, MUX_CLK_CPUCL1_PLL, CLK_CON_DIV_DIV_CLK_CPUCL1_CPU_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL1_CPU_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL1_CPU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL1_CNTCLK, DIV_CLK_CPUCL1_CPU, CLK_CON_DIV_DIV_CLK_CPUCL1_CNTCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL1_CNTCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL1_CNTCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL2_CPU, MUX_CLK_CPUCL2_PLL, CLK_CON_DIV_DIV_CLK_CPUCL2_CPU_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL2_CPU_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL2_CPU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL2_PCLK, DIV_CLK_CPUCL2_CPU, CLK_CON_DIV_DIV_CLK_CPUCL2_PCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL2_PCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL2_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL2_CMUREF, DIV_CLK_CPUCL2_CPU, CLK_CON_DIV_DIV_CLK_CPUCL2_CMUREF_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL2_CMUREF_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL2_CMUREF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL2_ACLK, DIV_CLK_CPUCL2_CPU, CLK_CON_DIV_DIV_CLK_CPUCL2_ACLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL2_ACLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL2_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL2_ATCLK, DIV_CLK_CPUCL2_CPU, CLK_CON_DIV_DIV_CLK_CPUCL2_ATCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL2_ATCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL2_ATCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL2_CNTCLK, DIV_CLK_CPUCL2_CPU, CLK_CON_DIV_DIV_CLK_CPUCL2_CNTCLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL2_CNTCLK_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL2_CNTCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_CPUCL2_PCLKDBG, DIV_CLK_CPUCL2_CPU, CLK_CON_DIV_DIV_CLK_CPUCL2_PCLKDBG_DIVRATIO, CLK_CON_DIV_DIV_CLK_CPUCL2_PCLKDBG_BUSY, CLK_CON_DIV_DIV_CLK_CPUCL2_PCLKDBG_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_BUS, PLL_AUD, CLK_CON_DIV_DIV_CLK_AUD_BUS_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_BUS_BUSY, CLK_CON_DIV_DIV_CLK_AUD_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_PLL, PLL_AUD, CLK_CON_DIV_DIV_CLK_AUD_PLL_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_PLL_BUSY, CLK_CON_DIV_DIV_CLK_AUD_PLL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_CPU_PCLKDBG, MUX_CLK_AUD_CPU_HCH, CLK_CON_DIV_DIV_CLK_AUD_CPU_PCLKDBG_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_CPU_PCLKDBG_BUSY, CLK_CON_DIV_DIV_CLK_AUD_CPU_PCLKDBG_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_CPU_ACLK, MUX_CLK_AUD_CPU_HCH, CLK_CON_DIV_DIV_CLK_AUD_CPU_ACLK_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_CPU_ACLK_BUSY, CLK_CON_DIV_DIV_CLK_AUD_CPU_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_UAIF0, DIV_CLK_AUD_AUDIF, CLK_CON_DIV_DIV_CLK_AUD_UAIF0_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_UAIF0_BUSY, CLK_CON_DIV_DIV_CLK_AUD_UAIF0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_AUDIF, PLL_AUD, CLK_CON_DIV_DIV_CLK_AUD_AUDIF_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_AUDIF_BUSY, CLK_CON_DIV_DIV_CLK_AUD_AUDIF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_UAIF2, DIV_CLK_AUD_AUDIF, CLK_CON_DIV_DIV_CLK_AUD_UAIF2_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_UAIF2_BUSY, CLK_CON_DIV_DIV_CLK_AUD_UAIF2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_UAIF3, DIV_CLK_AUD_AUDIF, CLK_CON_DIV_DIV_CLK_AUD_UAIF3_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_UAIF3_BUSY, CLK_CON_DIV_DIV_CLK_AUD_UAIF3_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_FM, MUX_CLK_AUD_FM, CLK_CON_DIV_DIV_CLK_AUD_FM_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_FM_BUSY, CLK_CON_DIV_DIV_CLK_AUD_FM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_DISPAUD_BUSP, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_DIV_DIV_CLK_DISPAUD_BUSP_DIVRATIO, CLK_CON_DIV_DIV_CLK_DISPAUD_BUSP_BUSY, CLK_CON_DIV_DIV_CLK_DISPAUD_BUSP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_AUD_FM_SPDY, TICK_USB, CLK_CON_DIV_DIV_CLK_AUD_FM_SPDY_DIVRATIO, CLK_CON_DIV_DIV_CLK_AUD_FM_SPDY_BUSY, CLK_CON_DIV_DIV_CLK_AUD_FM_SPDY_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_G3D_BUSP, MUX_CLK_G3D_BUSD, CLK_CON_DIV_DIV_CLK_G3D_BUSP_DIVRATIO, CLK_CON_DIV_DIV_CLK_G3D_BUSP_BUSY, CLK_CON_DIV_DIV_CLK_G3D_BUSP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_ISP_BUSP, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_DIV_DIV_CLK_ISP_BUSP_DIVRATIO, CLK_CON_DIV_DIV_CLK_ISP_BUSP_BUSY, CLK_CON_DIV_DIV_CLK_ISP_BUSP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_DIV(DIV_CLK_MFCMSCL_APB, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_DIV_DIV_CLK_MFCMSCL_APB_DIVRATIO, CLK_CON_DIV_DIV_CLK_MFCMSCL_APB_BUSY, CLK_CON_DIV_DIV_CLK_MFCMSCL_APB_ENABLE_AUTOMATIC_CLKGATING),
};

/*====================The section of GATEs===================*/
unsigned int cmucal_gate_size = 482;


struct cmucal_gate cmucal_gate_list[] = {
	CLK_GATE(CLK_BLK_APM_UID_APM_CMU_APM_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_CLK_BLK_APM_UID_APM_CMU_APM_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_APM_UID_APM_CMU_APM_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_APM_UID_APM_CMU_APM_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_SYS, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_SYS_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_SYS_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_SYS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_IntMEM, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_INTMEM_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_INTMEM_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_INTMEM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_WDT_APM_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_WDT_APM_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_WDT_APM_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_WDT_APM_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_LHM_AXI_P_ALIVE_IPCLKPORT_I_CLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_LHM_AXI_P_ALIVE_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_LHM_AXI_P_ALIVE_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_LHM_AXI_P_ALIVE_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_LHS_AXI_D_ALIVE_IPCLKPORT_I_CLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_LHS_AXI_D_ALIVE_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_LHS_AXI_D_ALIVE_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_LHS_AXI_D_ALIVE_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_MAILBOX_APM2AP_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2AP_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2AP_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2AP_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_MAILBOX_APM2CP_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2CP_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2CP_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2CP_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_MAILBOX_APM2GNSS_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2GNSS_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2GNSS_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2GNSS_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_MAILBOX_APM2WLBT_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2WLBT_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2WLBT_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MAILBOX_APM2WLBT_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_SYSREG_APM_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_SYSREG_APM_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_SYSREG_APM_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_SYSREG_APM_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_RSTnSYNC_CLK_APM_BUS_IPCLKPORT_CLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_RSTNSYNC_CLK_APM_BUS_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_RSTNSYNC_CLK_APM_BUS_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_RSTNSYNC_CLK_APM_BUS_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_RSTnSYNC_CLK_APM_BUS_NORET_IPCLKPORT_CLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_RSTNSYNC_CLK_APM_BUS_NORET_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_RSTNSYNC_CLK_APM_BUS_NORET_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_RSTNSYNC_CLK_APM_BUS_NORET_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_IP_BATCHER_AP_IPCLKPORT_i_pclk, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_IP_BATCHER_AP_IPCLKPORT_I_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_IP_BATCHER_AP_IPCLKPORT_I_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_IP_BATCHER_AP_IPCLKPORT_I_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_IP_BATCHER_CP_IPCLKPORT_i_pclk, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_IP_BATCHER_CP_IPCLKPORT_I_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_IP_BATCHER_CP_IPCLKPORT_I_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_IP_BATCHER_CP_IPCLKPORT_I_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_MP_APBSEMA_HWACG_2CH_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_MP_APBSEMA_HWACG_2CH_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MP_APBSEMA_HWACG_2CH_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_MP_APBSEMA_HWACG_2CH_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_SPEEDY_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_SPEEDY_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_SPEEDY_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_SPEEDY_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_APBIF_PMU_ALIVE_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_PMU_ALIVE_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_PMU_ALIVE_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_PMU_ALIVE_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_APBIF_GPIO_ALIVE_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_GPIO_ALIVE_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_GPIO_ALIVE_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_GPIO_ALIVE_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_CPU, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_CPU_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_CPU_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APM_IPCLKPORT_ACLK_CPU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_I2C_APM_IPCLKPORT_PCLK, DIV_CLK_APM_I2C, CLK_CON_GAT_GOUT_BLK_APM_UID_I2C_APM_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_I2C_APM_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_I2C_APM_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_ASYNCAPB_APM_IPCLKPORT_PCLKM, DIV_CLK_APM_I2C, CLK_CON_GAT_GOUT_BLK_APM_UID_ASYNCAPB_APM_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_ASYNCAPB_APM_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_ASYNCAPB_APM_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_ASYNCAPB_APM_IPCLKPORT_PCLKS, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_ASYNCAPB_APM_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_ASYNCAPB_APM_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_ASYNCAPB_APM_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_APBIF_RTC_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_RTC_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_RTC_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_RTC_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_APM_UID_APBIF_TOP_RTC_IPCLKPORT_PCLK, MUX_CLKCMU_APM_BUS_USER, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_TOP_RTC_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_TOP_RTC_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_APM_UID_APBIF_TOP_RTC_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_CAM_UID_CAM_CMU_CAM_IPCLKPORT_PCLK, DIV_CLK_CAM_BUSP, CLK_CON_GAT_CLK_BLK_CAM_UID_CAM_CMU_CAM_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_CAM_UID_CAM_CMU_CAM_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_CAM_UID_CAM_CMU_CAM_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS0_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS0_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS0_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS0_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS0_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS0_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS0_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS0_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS1_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS1_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS1_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS1_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS1_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS1_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS1_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS1_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS2_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS2_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS2_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS2_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS2_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS2_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS2_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS2_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS3_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS3_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS3_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS3_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS3_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS3_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS3_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS3_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS_DMA_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS_DMA_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS_DMA_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS_DMA_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_CSIS_DMA_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS_DMA_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS_DMA_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_CSIS_DMA_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_3AA0_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA0_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA0_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA0_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_3AA0_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA0_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA0_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA0_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_3AA1_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA1_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA1_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA1_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_3AA1_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA1_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA1_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_3AA1_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_NS_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_NS_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_NS_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_NS_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_NS_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_NS_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_NS_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_NS_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_S_PCLKM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_S_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_S_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_S_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_S_PCLKS, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_S_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_S_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_APB_ASYNC_SMMU_CAM_S_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_XIU_P_CAM, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_XIU_P_CAM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_XIU_P_CAM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_XIU_P_CAM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_AXI2APB_CAM0, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_AXI2APB_CAM0_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_AXI2APB_CAM0_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_AXI2APB_CAM0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_AXI2APB_CAM1, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_AXI2APB_CAM1_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_AXI2APB_CAM1_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_AXI2APB_CAM1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_CSIS0, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS0_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS0_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_CSIS1, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS1_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS1_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_CSIS2, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS2_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS2_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_CSIS3, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS3_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS3_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS3_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_3AA0, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_3AA0_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_3AA0_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_3AA0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_3AA1, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_3AA1_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_3AA1_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_3AA1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_XIU_D_CAM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_XIU_D_CAM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_XIU_D_CAM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_XIU_D_CAM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_PCLK_PPMU_CAM, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_PCLK_PPMU_CAM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_PCLK_PPMU_CAM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_PCLK_PPMU_CAM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_PPMU_CAM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_PPMU_CAM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_PPMU_CAM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_PPMU_CAM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_SMMU_CAM, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_SMMU_CAM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_SMMU_CAM_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_SMMU_CAM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_SYSREG_CAM_IPCLKPORT_PCLK, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_SYSREG_CAM_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_SYSREG_CAM_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_SYSREG_CAM_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_LHS_ATB_CAMISP_IPCLKPORT_I_CLK, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHS_ATB_CAMISP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHS_ATB_CAMISP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHS_ATB_CAMISP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_LHM_AXI_P_CAM_IPCLKPORT_I_CLK, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHM_AXI_P_CAM_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHM_AXI_P_CAM_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHM_AXI_P_CAM_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_LHS_AXI_D_CAM_IPCLKPORT_I_CLK, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHS_AXI_D_CAM_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHS_AXI_D_CAM_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_LHS_AXI_D_CAM_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_RSTnSYNC_CLK_CAM_BUSD_IPCLKPORT_CLK, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_RSTNSYNC_CLK_CAM_BUSD_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_RSTNSYNC_CLK_CAM_BUSD_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_RSTNSYNC_CLK_CAM_BUSD_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_RSTnSYNC_CLK_CAM_BUSP_IPCLKPORT_CLK, DIV_CLK_CAM_BUSP, CLK_CON_GAT_GOUT_BLK_CAM_UID_RSTNSYNC_CLK_CAM_BUSP_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_RSTNSYNC_CLK_CAM_BUSP_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_RSTNSYNC_CLK_CAM_BUSP_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CAM_UID_is6p20p0_CAM_IPCLKPORT_ACLK_CSIS_DMA, MUX_CLKCMU_CAM_BUS_USER, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS_DMA_CG_VAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS_DMA_MANUAL, CLK_CON_GAT_GOUT_BLK_CAM_UID_IS6P20P0_CAM_IPCLKPORT_ACLK_CSIS_DMA_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_MFCMSCL_MSCL, MUX_CLKCMU_MFCMSCL_MSCL, CLK_CON_GAT_GATE_CLKCMU_MFCMSCL_MSCL_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_MFCMSCL_MSCL_MANUAL, CLK_CON_GAT_GATE_CLKCMU_MFCMSCL_MSCL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_MFCMSCL_MFC, MUX_CLKCMU_MFCMSCL_MFC, CLK_CON_GAT_GATE_CLKCMU_MFCMSCL_MFC_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_MFCMSCL_MFC_MANUAL, CLK_CON_GAT_GATE_CLKCMU_MFCMSCL_MFC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CPUCL0_SWITCH, PLL_SHARED0, CLK_CON_GAT_GATE_CLKCMU_CPUCL0_SWITCH_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CPUCL0_SWITCH_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CPUCL0_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CPUCL1_SWITCH, PLL_SHARED0_DIV2, CLK_CON_GAT_GATE_CLKCMU_CPUCL1_SWITCH_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CPUCL1_SWITCH_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CPUCL1_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_G3D_SWITCH, PLL_SHARED0_DIV2, CLK_CON_GAT_GATE_CLKCMU_G3D_SWITCH_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_G3D_SWITCH_MANUAL, CLK_CON_GAT_GATE_CLKCMU_G3D_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_ISP_BUS, MUX_CLKCMU_ISP_BUS, CLK_CON_GAT_GATE_CLKCMU_ISP_BUS_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_ISP_BUS_MANUAL, CLK_CON_GAT_GATE_CLKCMU_ISP_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CAM_BUS, MUX_CLKCMU_CAM_BUS, CLK_CON_GAT_GATE_CLKCMU_CAM_BUS_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CAM_BUS_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CAM_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_ISP_GDC, MUX_CLKCMU_ISP_GDC, CLK_CON_GAT_GATE_CLKCMU_ISP_GDC_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_ISP_GDC_MANUAL, CLK_CON_GAT_GATE_CLKCMU_ISP_GDC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_DISPAUD_BUS, MUX_CLKCMU_DISPAUD_BUS, CLK_CON_GAT_GATE_CLKCMU_DISPAUD_BUS_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_DISPAUD_BUS_MANUAL, CLK_CON_GAT_GATE_CLKCMU_DISPAUD_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_FSYS_MMC_EMBD, MUX_CLKCMU_FSYS_MMC_EMBD, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_EMBD_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_EMBD_MANUAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_EMBD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_FSYS_BUS, MUX_CLKCMU_FSYS_BUS, CLK_CON_GAT_GATE_CLKCMU_FSYS_BUS_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_BUS_MANUAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_MODEM_SHARED0, PLL_SHARED0_DIV2, CLK_CON_GAT_GATE_CLKCMU_MODEM_SHARED0_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_MODEM_SHARED0_MANUAL, CLK_CON_GAT_GATE_CLKCMU_MODEM_SHARED0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_PERI_BUS, MUX_CLKCMU_PERI_BUS, CLK_CON_GAT_GATE_CLKCMU_PERI_BUS_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_PERI_BUS_MANUAL, CLK_CON_GAT_GATE_CLKCMU_PERI_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_PERI_UART_0, MUX_CLKCMU_PERI_UART_0, CLK_CON_GAT_GATE_CLKCMU_PERI_UART_0_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_PERI_UART_0_MANUAL, CLK_CON_GAT_GATE_CLKCMU_PERI_UART_0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMUC_PERI_UART_1, MUX_CLKCMU_PERI_UART_1, CLK_CON_GAT_GATE_CLKCMUC_PERI_UART_1_CG_VAL, CLK_CON_GAT_GATE_CLKCMUC_PERI_UART_1_MANUAL, CLK_CON_GAT_GATE_CLKCMUC_PERI_UART_1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_PERI_USI2, MUX_CLKCMU_PERI_USI2, CLK_CON_GAT_GATE_CLKCMU_PERI_USI2_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_PERI_USI2_MANUAL, CLK_CON_GAT_GATE_CLKCMU_PERI_USI2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_PERI_SPI_0, MUX_CLKCMU_PERI_SPI_0, CLK_CON_GAT_GATE_CLKCMU_PERI_SPI_0_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_PERI_SPI_0_MANUAL, CLK_CON_GAT_GATE_CLKCMU_PERI_SPI_0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_PERI_SPI_1, MUX_CLKCMU_PERI_SPI_1, CLK_CON_GAT_GATE_CLKCMU_PERI_SPI_1_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_PERI_SPI_1_MANUAL, CLK_CON_GAT_GATE_CLKCMU_PERI_SPI_1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_APM_BUS, MUX_CLKCMU_APM_BUS, CLK_CON_GAT_GATE_CLKCMU_APM_BUS_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_APM_BUS_MANUAL, CLK_CON_GAT_GATE_CLKCMU_APM_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_FSYS_MMC_CARD, MUX_CLKCMU_FSYS_MMC_CARD, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_CARD_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_CARD_MANUAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_CARD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CIS_CLK0, MUX_CLKCMU_CIS_CLK0, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK0_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK0_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CIS_CLK1, MUX_CLKCMU_CIS_CLK1, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK1_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK1_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CIS_CLK2, MUX_CLKCMU_CIS_CLK2, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK2_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK2_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CIS_CLK2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_PERI_USI0, MUX_CLKCMU_PERI_USI0, CLK_CON_GAT_GATE_CLKCMU_PERI_USI0_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_PERI_USI0_MANUAL, CLK_CON_GAT_GATE_CLKCMU_PERI_USI0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_PERI_USI1, MUX_CLKCMU_PERI_USI1, CLK_CON_GAT_GATE_CLKCMU_PERI_USI1_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_PERI_USI1_MANUAL, CLK_CON_GAT_GATE_CLKCMU_PERI_USI1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_MODEM_SHARED1, PLL_SHARED1_DIV2, CLK_CON_GAT_GATE_CLKCMU_MODEM_SHARED1_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_MODEM_SHARED1_MANUAL, CLK_CON_GAT_GATE_CLKCMU_MODEM_SHARED1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_DISPAUD_VCLK, MUX_CLKCMU_DISPAUD_CPU, CLK_CON_GAT_GATE_CLKCMU_DISPAUD_VCLK_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_DISPAUD_VCLK_MANUAL, CLK_CON_GAT_GATE_CLKCMU_DISPAUD_VCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_ISP_VRA, MUX_CLKCMU_ISP_VRA, CLK_CON_GAT_GATE_CLKCMU_ISP_VRA_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_ISP_VRA_MANUAL, CLK_CON_GAT_GATE_CLKCMU_ISP_VRA_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLKCMU_MIF_SWITCH, MUX_CLKCMU_MIF_SWITCH, CLK_CON_GAT_CLKCMU_MIF_SWITCH_CG_VAL, CLK_CON_GAT_CLKCMU_MIF_SWITCH_MANUAL, CLK_CON_GAT_CLKCMU_MIF_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_FSYS_MMC_SDIO, MUX_CLKCMU_FSYS_MMC_SDIO, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_SDIO_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_SDIO_MANUAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_MMC_SDIO_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CORE_BUS, MUX_CLKCMU_CORE_BUS, CLK_CON_GAT_GATE_CLKCMU_CORE_BUS_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CORE_BUS_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CORE_BUS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_PERI_UART_2, MUX_CLKCMU_PERI_UART_2, CLK_CON_GAT_GATE_CLKCMU_PERI_UART_2_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_PERI_UART_2_MANUAL, CLK_CON_GAT_GATE_CLKCMU_PERI_UART_2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CPUCL0_SECJTAG, PLL_SHARED0_DIV2, CLK_CON_GAT_GATE_CLKCMU_CPUCL0_SECJTAG_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CPUCL0_SECJTAG_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CPUCL0_SECJTAG_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CORE_CCI, MUX_CLKCMU_CORE_CCI, CLK_CON_GAT_GATE_CLKCMU_CORE_CCI_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CORE_CCI_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CORE_CCI_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CPUCL2_SWITCH, PLL_SHARED0_DIV2, CLK_CON_GAT_GATE_CLKCMU_CPUCL2_SWITCH_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CPUCL2_SWITCH_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CPUCL2_SWITCH_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_FSYS_USB30DRD, MUX_CLKCMU_FSYS_USB30DRD, CLK_CON_GAT_GATE_CLKCMU_FSYS_USB30DRD_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_USB30DRD_MANUAL, CLK_CON_GAT_GATE_CLKCMU_FSYS_USB30DRD_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_CORE_G3D, MUX_CLKCMU_CORE_G3D, CLK_CON_GAT_GATE_CLKCMU_CORE_G3D_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_CORE_G3D_MANUAL, CLK_CON_GAT_GATE_CLKCMU_CORE_G3D_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GATE_CLKCMU_MIF_BUSP, MUX_CLKCMU_MIF_BUSP, CLK_CON_GAT_GATE_CLKCMU_MIF_BUSP_CG_VAL, CLK_CON_GAT_GATE_CLKCMU_MIF_BUSP_MANUAL, CLK_CON_GAT_GATE_CLKCMU_MIF_BUSP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKS, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKS, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKS, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKM, MUX_CLK_CORE_GIC, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_AXI_GIC_IPCLKPORT_ACLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_ADS_APB_G_CSSYS_IPCLKPORT_PCLKS, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_ADS_APB_G_CSSYS_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_ADS_APB_G_CSSYS_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_ADS_APB_G_CSSYS_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AHB_BRIDGE_IPCLKPORT_HCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB_BRIDGE_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB_BRIDGE_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB_BRIDGE_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AHB2APB_COREP0_IPCLKPORT_HCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_COREP0_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_COREP0_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_COREP0_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AHB2APB_CSSYS_DBG_IPCLKPORT_HCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_CSSYS_DBG_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_CSSYS_DBG_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_CSSYS_DBG_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AXI2AHB_CORE_CSSYS_IPCLKPORT_aclk, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2AHB_CORE_CSSYS_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2AHB_CORE_CSSYS_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2AHB_CORE_CSSYS_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AXI2AHB_COREP_IPCLKPORT_aclk, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2AHB_COREP_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2AHB_COREP_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2AHB_COREP_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AXI2APB_2MB_BUSCP_IPCLKPORT_ACLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2APB_2MB_BUSCP_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2APB_2MB_BUSCP_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI2APB_2MB_BUSCP_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_CCI_550_IPCLKPORT_ACLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_CCI_550_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_CCI_550_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_CCI_550_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_GIC400_AIHWACG_IPCLKPORT_CLK, MUX_CLK_CORE_GIC, CLK_CON_GAT_GOUT_BLK_CORE_UID_GIC400_AIHWACG_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_GIC400_AIHWACG_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_GIC400_AIHWACG_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL0_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL0_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL0_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL0_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL1_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL1_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL1_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL1_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_ABOX_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_ABOX_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_ABOX_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_ABOX_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_CP_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_DPU_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_DPU_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_DPU_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_DPU_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D1_ISP_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D1_ISP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D1_ISP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D1_ISP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_WLBT_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_WLBT_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_WLBT_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_WLBT_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_P_CP_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_P_CP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_P_CP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_P_CP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_CPU_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_CPU_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_CPU_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_CPU_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_CPU_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_CPU_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_CPU_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_CPU_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_NRT_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_NRT_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_NRT_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_NRT_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_NRT_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_NRT_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_NRT_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_NRT_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_APM_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_APM_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_APM_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_APM_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL0_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL0_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL0_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL0_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL1_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL1_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL1_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL1_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_DISPAUD_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_DISPAUD_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_DISPAUD_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_DISPAUD_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_FSYS_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_FSYS_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_FSYS_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_FSYS_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_G3D_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_G3D_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_G3D_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_G3D_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_ISP_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_ISP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_ISP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_ISP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_MFCMSCL_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MFCMSCL_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MFCMSCL_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MFCMSCL_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_PERI_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_PERI_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_PERI_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_PERI_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_MAILBOX_ABOX_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_ABOX_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_ABOX_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_ABOX_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_MAILBOX_CP_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_CP_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_CP_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_CP_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_MAILBOX_GNSS_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_GNSS_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_GNSS_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_GNSS_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_MAILBOX_CP_SECURE_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_CP_SECURE_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_CP_SECURE_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_CP_SECURE_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_MAILBOX_WLBT_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_WLBT_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_WLBT_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_WLBT_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_MAILBOX_WLBT_CM4_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_WLBT_CM4_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_WLBT_CM4_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_MAILBOX_WLBT_CM4_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_ACLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL0_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_ACLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL1_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_SFR_APBIF_CMU_TOPC_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_SFR_APBIF_CMU_TOPC_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_SFR_APBIF_CMU_TOPC_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_SFR_APBIF_CMU_TOPC_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_SYSREG_CORE_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_SYSREG_CORE_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_SYSREG_CORE_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_SYSREG_CORE_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_ACLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_pclk, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_ACLK_P_CORE, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_ACLK_P_CORE_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_ACLK_P_CORE_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_ACLK_P_CORE_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_CCLK_P_CORE, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_CCLK_P_CORE_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_CCLK_P_CORE_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_CCLK_P_CORE_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_PCLK_P_CORE, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_PCLK_P_CORE_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_PCLK_P_CORE_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_PCLK_P_CORE_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_WRAP_ADC_IF_IPCLKPORT_PCLK_S0, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_WRAP_ADC_IF_IPCLKPORT_PCLK_S0_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_WRAP_ADC_IF_IPCLKPORT_PCLK_S0_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_WRAP_ADC_IF_IPCLKPORT_PCLK_S0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_WRAP_ADC_IF_IPCLKPORT_PCLK_S1, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_WRAP_ADC_IF_IPCLKPORT_PCLK_S1_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_WRAP_ADC_IF_IPCLKPORT_PCLK_S1_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_WRAP_ADC_IF_IPCLKPORT_PCLK_S1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_CCI_OCC_IPCLKPORT_CLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_CCI_OCC_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_CCI_OCC_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_CCI_OCC_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_BUSD_IPCLKPORT_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSD_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSD_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSD_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_BUSP_OCC_IPCLKPORT_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSP_OCC_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSP_OCC_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSP_OCC_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKS, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKM, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_CCI_550_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AHB2APB_COREP1_IPCLKPORT_HCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_COREP1_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_COREP1_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_COREP1_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AHB2APB_1MB_COREP2_IPCLKPORT_HCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_1MB_COREP2_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_1MB_COREP2_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AHB2APB_1MB_COREP2_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL2_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL2_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL2_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_ACE_D_CPUCL2_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_MIF0_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MIF0_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MIF0_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MIF0_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_MIF1_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MIF1_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MIF1_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_MIF1_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL2_IPCLKPORT_ACLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL2_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL2_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL2_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL2_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL2_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL2_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPMU_ACE_CPUCL2_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_G3D_OCC_IPCLKPORT_CLK, MUX_CLKCMU_CORE_G3D_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_G3D_OCC_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_G3D_OCC_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_G3D_OCC_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL2_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL2_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL2_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CPUCL2_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_ASYNCSFR_WR_DMC_IPCLKPORT_I_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_ASYNCSFR_WR_DMC_IPCLKPORT_I_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_ASYNCSFR_WR_DMC_IPCLKPORT_I_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_ASYNCSFR_WR_DMC_IPCLKPORT_I_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_CORE_UID_CORE_CMU_CORE_IPCLKPORT_PCLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_CLK_BLK_CORE_UID_CORE_CMU_CORE_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_CORE_UID_CORE_CMU_CORE_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_CORE_UID_CORE_CMU_CORE_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_ACLK, MUX_CLKCMU_CORE_G3D_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PPCFW_G3D_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_BUSP_IPCLKPORT_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSP_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSP_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_BUSP_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_CCI_IPCLKPORT_CLK, MUX_CLKCMU_CORE_CCI_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_CCI_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_CCI_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_CCI_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_G3D_IPCLKPORT_CLK, MUX_CLKCMU_CORE_G3D_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_G3D_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_G3D_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_G3D_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_G3D_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_G3D_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_G3D_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_G3D_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_G3D_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_RSTnSYNC_CLK_CORE_GIC_IPCLKPORT_CLK, MUX_CLK_CORE_GIC, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_GIC_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_GIC_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_RSTNSYNC_CLK_CORE_GIC_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKM, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_PDMA0_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKM, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AD_APB_SPDMA_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AXI_US_A40_32to128_PDMA_IPCLKPORT_aclk, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI_US_A40_32TO128_PDMA_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI_US_A40_32TO128_PDMA_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI_US_A40_32TO128_PDMA_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_AXI_US_A40_32to128_SDMA_IPCLKPORT_aclk, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI_US_A40_32TO128_SDMA_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI_US_A40_32TO128_SDMA_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_AXI_US_A40_32TO128_SDMA_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_APM_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_APM_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_APM_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_APM_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_CSSYS_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CSSYS_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CSSYS_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CSSYS_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_FSYS_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_FSYS_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_FSYS_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_FSYS_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_GNSS_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_GNSS_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_GNSS_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_GNSS_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D0_ISP_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D0_ISP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D0_ISP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D0_ISP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_MFCMSCL_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_MFCMSCL_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_MFCMSCL_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_MFCMSCL_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_PDMA_CORE_IPCLKPORT_ACLK_PDMA0, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_PDMA_CORE_IPCLKPORT_ACLK_PDMA0_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PDMA_CORE_IPCLKPORT_ACLK_PDMA0_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_PDMA_CORE_IPCLKPORT_ACLK_PDMA0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_SPDMA_CORE_IPCLKPORT_ACLK_PDMA1, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_SPDMA_CORE_IPCLKPORT_ACLK_PDMA1_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_SPDMA_CORE_IPCLKPORT_ACLK_PDMA1_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_SPDMA_CORE_IPCLKPORT_ACLK_PDMA1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_XIU_D_PDMA_3x1_IPCLKPORT_ACLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_XIU_D_PDMA_3X1_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_XIU_D_PDMA_3X1_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_XIU_D_PDMA_3X1_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHM_AXI_D_CAM_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CAM_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CAM_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHM_AXI_D_CAM_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_RT_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_RT_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_RT_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D0_MIF_RT_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_RT_IPCLKPORT_I_CLK, MUX_CLKCMU_CORE_BUS_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_RT_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_RT_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_D1_MIF_RT_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_LHS_AXI_P_CAM_IPCLKPORT_I_CLK, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CAM_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CAM_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_LHS_AXI_P_CAM_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_GCLK, MUX_CLKCMU_CORE_G3D_USER, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_GCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_GCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_D_CORE_IPCLKPORT_GCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_pclk, DIV_CLK_CORE_BUSP, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CORE_UID_TREX_P_CORE_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_CPUCL0_UID_CPUCL0_CMU_CPUCL0_IPCLKPORT_PCLK, DIV_CLK_CPUCL0_PCLK, CLK_CON_GAT_CLK_BLK_CPUCL0_UID_CPUCL0_CMU_CPUCL0_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_CPUCL0_UID_CPUCL0_CMU_CPUCL0_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_CPUCL0_UID_CPUCL0_CMU_CPUCL0_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_AXI2APB_CPUCL0_IPCLKPORT_ACLK, DIV_CLK_CPUCL0_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AXI2APB_CPUCL0_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AXI2APB_CPUCL0_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AXI2APB_CPUCL0_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_SYSREG_CPUCL0_IPCLKPORT_PCLK, DIV_CLK_CPUCL0_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_SYSREG_CPUCL0_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_SYSREG_CPUCL0_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_SYSREG_CPUCL0_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_RSTnSYNC_CLK_CPUCL0_PCLK_IPCLKPORT_CLK, DIV_CLK_CPUCL0_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_PCLK_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_PCLK_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_PCLK_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_LHM_AXI_P_CPUCL0_IPCLKPORT_I_CLK, DIV_CLK_CPUCL0_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHM_AXI_P_CPUCL0_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHM_AXI_P_CPUCL0_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHM_AXI_P_CPUCL0_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_LHS_ACE_D_CPUCL0_IPCLKPORT_I_CLK, DIV_CLK_CPUCL0_ACLK, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHS_ACE_D_CPUCL0_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHS_ACE_D_CPUCL0_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHS_ACE_D_CPUCL0_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_ADM_APB_P_CSSYS_DBG_IPCLKPORT_PCLKM, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADM_APB_P_CSSYS_DBG_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADM_APB_P_CSSYS_DBG_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADM_APB_P_CSSYS_DBG_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_CSSYS_DBG_IPCLKPORT_PCLKDBG, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_CSSYS_DBG_IPCLKPORT_PCLKDBG_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_CSSYS_DBG_IPCLKPORT_PCLKDBG_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_CSSYS_DBG_IPCLKPORT_PCLKDBG_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_LHS_AXI_T_CSSYS_DBG_IPCLKPORT_I_CLK, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHS_AXI_T_CSSYS_DBG_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHS_AXI_T_CSSYS_DBG_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_LHS_AXI_T_CSSYS_DBG_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_RSTnSYNC_CLK_CPUCL0_PCLKDBG_IPCLKPORT_CLK, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_PCLKDBG_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_PCLKDBG_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_PCLKDBG_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_DBG_CLUSTER1_IPCLKPORT_PCLKS, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_DBG_CLUSTER1_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_DBG_CLUSTER1_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_DBG_CLUSTER1_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKM, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKS, DIV_CLK_CPUCL0_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_DUMP_PC_CPUCL0_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_RSTnSYNC_CLK_CPUCL0_ACLK_IPCLKPORT_CLK, DIV_CLK_CPUCL0_ACLK, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_ACLK_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_ACLK_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL0_ACLK_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_DUMP_PC_CPUCL0_IPCLKPORT_I_PCLK, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_DUMP_PC_CPUCL0_IPCLKPORT_I_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_DUMP_PC_CPUCL0_IPCLKPORT_I_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_DUMP_PC_CPUCL0_IPCLKPORT_I_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_ADS_AHB_G_SSS_IPCLKPORT_HCLK, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_AHB_G_SSS_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_AHB_G_SSS_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_AHB_G_SSS_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_RSTnSYNC_CLK_CPUCL_SECJTAG_IPCLKPORT_CLK, MUX_CLKCMU_CPUCL0_SECJTAG_USER, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL_SECJTAG_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL_SECJTAG_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_RSTNSYNC_CLK_CPUCL_SECJTAG_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_AD_APB_P_SECJTAG_CPUCL0_IPCLKPORT_PCLKM, MUX_CLKCMU_CPUCL0_SECJTAG_USER, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_SECJTAG_CPUCL0_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_SECJTAG_CPUCL0_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_SECJTAG_CPUCL0_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_AD_APB_P_SECJTAG_CPUCL0_IPCLKPORT_PCLKS, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_SECJTAG_CPUCL0_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_SECJTAG_CPUCL0_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_AD_APB_P_SECJTAG_CPUCL0_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_SECJTAG_IPCLKPORT_i_clk, MUX_CLKCMU_CPUCL0_SECJTAG_USER, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_SECJTAG_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_SECJTAG_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_SECJTAG_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_DBG_CLUSTER2_IPCLKPORT_PCLKS, DIV_CLK_CPUCL0_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_DBG_CLUSTER2_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_DBG_CLUSTER2_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL0_UID_ADS_APB_G_CSSYS_DBG_CLUSTER2_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_CPUCL1_UID_CPUCL1_CMU_CPUCL1_IPCLKPORT_PCLK, DIV_CLK_CPUCL1_PCLK, CLK_CON_GAT_CLK_BLK_CPUCL1_UID_CPUCL1_CMU_CPUCL1_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_CPUCL1_UID_CPUCL1_CMU_CPUCL1_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_CPUCL1_UID_CPUCL1_CMU_CPUCL1_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_LHM_AXI_P_CPUCL1_IPCLKPORT_I_CLK, DIV_CLK_CPUCL1_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_LHM_AXI_P_CPUCL1_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_LHM_AXI_P_CPUCL1_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_LHM_AXI_P_CPUCL1_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_SYSREG_CPUCL1_IPCLKPORT_PCLK, DIV_CLK_CPUCL1_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_SYSREG_CPUCL1_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_SYSREG_CPUCL1_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_SYSREG_CPUCL1_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_RSTnSYNC_CLK_CPUCL1_PCLK_IPCLKPORT_CLK, DIV_CLK_CPUCL1_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_PCLK_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_PCLK_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_PCLK_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_LHS_ACE_D_CPUCL1_IPCLKPORT_I_CLK, DIV_CLK_CPUCL1_ACLK, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_LHS_ACE_D_CPUCL1_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_LHS_ACE_D_CPUCL1_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_LHS_ACE_D_CPUCL1_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_AXI2APB_CPUCL1_IPCLKPORT_ACLK, DIV_CLK_CPUCL1_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AXI2APB_CPUCL1_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AXI2APB_CPUCL1_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AXI2APB_CPUCL1_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_RSTnSYNC_CLK_CPUCL1_ACLK_IPCLKPORT_CLK, DIV_CLK_CPUCL1_ACLK, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_ACLK_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_ACLK_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_ACLK_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_RSTnSYNC_CLK_CPUCL1_PCLKDBG_IPCLKPORT_CLK, DIV_CLK_CPUCL1_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_PCLKDBG_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_PCLKDBG_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_RSTNSYNC_CLK_CPUCL1_PCLKDBG_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_ADM_APB_G_CPUCL1_IPCLKPORT_PCLKM, DIV_CLK_CPUCL1_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_ADM_APB_G_CPUCL1_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_ADM_APB_G_CPUCL1_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_ADM_APB_G_CPUCL1_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKM, DIV_CLK_CPUCL1_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKS, DIV_CLK_CPUCL1_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_AD_APB_P_DUMP_PC_CPUCL1_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL1_UID_DUMP_PC_CPUCL1_IPCLKPORT_I_PCLK, DIV_CLK_CPUCL1_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_DUMP_PC_CPUCL1_IPCLKPORT_I_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_DUMP_PC_CPUCL1_IPCLKPORT_I_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL1_UID_DUMP_PC_CPUCL1_IPCLKPORT_I_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_CPUCL2_UID_CPUCL2_CMU_CPUCL2_IPCLKPORT_PCLK, DIV_CLK_CPUCL2_PCLK, CLK_CON_GAT_CLK_BLK_CPUCL2_UID_CPUCL2_CMU_CPUCL2_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_CPUCL2_UID_CPUCL2_CMU_CPUCL2_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_CPUCL2_UID_CPUCL2_CMU_CPUCL2_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_LHS_ACE_D_CPUCL2_IPCLKPORT_I_CLK, DIV_CLK_CPUCL2_ACLK, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_LHS_ACE_D_CPUCL2_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_LHS_ACE_D_CPUCL2_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_LHS_ACE_D_CPUCL2_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_LHM_AXI_P_CPUCL2_IPCLKPORT_I_CLK, DIV_CLK_CPUCL2_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_LHM_AXI_P_CPUCL2_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_LHM_AXI_P_CPUCL2_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_LHM_AXI_P_CPUCL2_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_AXI2APB_CPUCL2_IPCLKPORT_ACLK, DIV_CLK_CPUCL2_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AXI2APB_CPUCL2_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AXI2APB_CPUCL2_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AXI2APB_CPUCL2_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_AD_APB_P_DUMP_PC_CPUCL2_IPCLKPORT_PCLKM, DIV_CLK_CPUCL2_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AD_APB_P_DUMP_PC_CPUCL2_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AD_APB_P_DUMP_PC_CPUCL2_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AD_APB_P_DUMP_PC_CPUCL2_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_AD_APB_P_DUMP_PC_CPUCL2_IPCLKPORT_PCLKS, DIV_CLK_CPUCL2_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AD_APB_P_DUMP_PC_CPUCL2_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AD_APB_P_DUMP_PC_CPUCL2_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_AD_APB_P_DUMP_PC_CPUCL2_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_ADM_APB_G_CPUCL2_IPCLKPORT_PCLKM, DIV_CLK_CPUCL2_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_ADM_APB_G_CPUCL2_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_ADM_APB_G_CPUCL2_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_ADM_APB_G_CPUCL2_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_DUMP_PC_CPUCL2_IPCLKPORT_I_PCLK, DIV_CLK_CPUCL2_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_DUMP_PC_CPUCL2_IPCLKPORT_I_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_DUMP_PC_CPUCL2_IPCLKPORT_I_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_DUMP_PC_CPUCL2_IPCLKPORT_I_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_SYSREG_IPCLKPORT_PCLK, DIV_CLK_CPUCL2_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_SYSREG_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_SYSREG_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_SYSREG_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_RSTnSYNC_CLK_CPUCL2_ACLK_IPCLKPORT_CLK, DIV_CLK_CPUCL2_ACLK, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_ACLK_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_ACLK_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_ACLK_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_RSTnSYNC_CLK_CPUCL2_PCLK_IPCLKPORT_CLK, DIV_CLK_CPUCL2_PCLK, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_PCLK_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_PCLK_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_PCLK_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_CPUCL2_UID_RSTnSYNC_CLK_CPUCL2_PCLKDBG_IPCLKPORT_CLK, DIV_CLK_CPUCL2_PCLKDBG, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_PCLKDBG_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_PCLKDBG_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_CPUCL2_UID_RSTNSYNC_CLK_CPUCL2_PCLKDBG_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF0, MUX_CLK_AUD_UAIF0, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF0_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF0_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF3, MUX_CLK_AUD_UAIF3, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF3_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF3_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF3_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_CA7, MUX_CLK_AUD_CPU_HCH, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_CA7_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_CA7_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_CA7_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_ASB, DIV_CLK_AUD_CPU_ACLK, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_ASB_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_ASB_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_CCLK_ASB_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_ACLK, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AXI_US_32to128_IPCLKPORT_aclk, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AXI_US_32TO128_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AXI_US_32TO128_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AXI_US_32TO128_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_UAIF0_IPCLKPORT_CLK, MUX_CLK_AUD_UAIF0, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF0_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF0_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF0_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_UAIF2_IPCLKPORT_CLK, MUX_CLK_AUD_UAIF2, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF2_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF2_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF2_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_UAIF3_IPCLKPORT_CLK, MUX_CLK_AUD_UAIF3, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF3_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF3_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_UAIF3_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_CPU_IPCLKPORT_CLK, MUX_CLK_AUD_CPU_HCH, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_CPU_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_CPU_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_CPU_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_PCLKDBG_IPCLKPORT_CLK, DIV_CLK_AUD_CPU_PCLKDBG, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_PCLKDBG_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_PCLKDBG_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_PCLKDBG_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_BUS_IPCLKPORT_CLK, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_BUS_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_BUS_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_BUS_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKM, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_PCLK, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_WDT_ABOXCPU_IPCLKPORT_PCLK, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_WDT_ABOXCPU_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_WDT_ABOXCPU_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_WDT_ABOXCPU_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF2, MUX_CLK_AUD_UAIF2, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF2_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF2_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_UAIF2_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_DFTMUX_DISPAUD_IPCLKPORT_AUD_CODEC_MCLK, DIV_CLK_AUD_AUDIF, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DFTMUX_DISPAUD_IPCLKPORT_AUD_CODEC_MCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DFTMUX_DISPAUD_IPCLKPORT_AUD_CODEC_MCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DFTMUX_DISPAUD_IPCLKPORT_AUD_CODEC_MCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_ACLK, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_PCLK, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_ABOX_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_SMMU_ABOX_IPCLKPORT_CLK, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SMMU_ABOX_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SMMU_ABOX_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SMMU_ABOX_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_IPCLKPORT_PCLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_IPCLKPORT_PCLKM, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_SECURE_IPCLKPORT_PCLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_SECURE_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_SECURE_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_SECURE_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_SECURE_IPCLKPORT_PCLKM, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_SECURE_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_SECURE_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DECON0_SECURE_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DPP_IPCLKPORT_PCLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPP_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPP_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPP_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DPP_IPCLKPORT_PCLKM, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPP_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPP_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPP_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_IPCLKPORT_PCLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_IPCLKPORT_PCLKM, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_SECURE_IPCLKPORT_PCLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_SECURE_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_SECURE_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_SECURE_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_SECURE_IPCLKPORT_PCLKM, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_SECURE_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_SECURE_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DPU_DMA_SECURE_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_DSIM0_IPCLKPORT_PCLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DSIM0_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DSIM0_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_DSIM0_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AXI2APB_DISPAUD_IPCLKPORT_ACLK, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AXI2APB_DISPAUD_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AXI2APB_DISPAUD_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AXI2APB_DISPAUD_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DPP, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DPP_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DPP_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DPP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DMA, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DMA_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DMA_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DMA_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DECON0, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DECON0_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DECON0_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_DPU_IPCLKPORT_ACLK_DECON0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_LHS_AXI_D_DPU_IPCLKPORT_I_CLK, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHS_AXI_D_DPU_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHS_AXI_D_DPU_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHS_AXI_D_DPU_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PERI_AXI_ASB_IPCLKPORT_ACLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_DISPAUD_BUSD_IPCLKPORT_CLK, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_DISPAUD_BUSD_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_DISPAUD_BUSD_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_DISPAUD_BUSD_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_DISPAUD_BUSP_IPCLKPORT_CLK, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_DISPAUD_BUSP_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_DISPAUD_BUSP_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_DISPAUD_BUSP_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_ACLK, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_PCLK, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_PPMU_DPU_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_SMMU_DPU_IPCLKPORT_CLK, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SMMU_DPU_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SMMU_DPU_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SMMU_DPU_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_SYSREG_DISPAUD_IPCLKPORT_PCLK, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SYSREG_DISPAUD_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SYSREG_DISPAUD_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_SYSREG_DISPAUD_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_XIU_P_DISPAUD_IPCLKPORT_ACLK, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_XIU_P_DISPAUD_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_XIU_P_DISPAUD_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_XIU_P_DISPAUD_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_LHM_AXI_P_DISPAUD_IPCLKPORT_I_CLK, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHM_AXI_P_DISPAUD_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHM_AXI_P_DISPAUD_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHM_AXI_P_DISPAUD_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_LHS_AXI_D_ABOX_IPCLKPORT_I_CLK, DIV_CLK_AUD_BUS, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHS_AXI_D_ABOX_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHS_AXI_D_ABOX_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_LHS_AXI_D_ABOX_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_RSTnSYNC_CLK_AUD_CPU_ACLK_IPCLKPORT_CLK, DIV_CLK_AUD_CPU_ACLK, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_CPU_ACLK_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_CPU_ACLK_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_RSTNSYNC_CLK_AUD_CPU_ACLK_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_DISPAUD_UID_DISPAUD_CMU_DISPAUD_IPCLKPORT_PCLK, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_CLK_BLK_DISPAUD_UID_DISPAUD_CMU_DISPAUD_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_DISPAUD_UID_DISPAUD_CMU_DISPAUD_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_DISPAUD_UID_DISPAUD_CMU_DISPAUD_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_ABOX_DAP_IPCLKPORT_dapclk, DIV_CLK_AUD_CPU_PCLKDBG, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_DAP_IPCLKPORT_DAPCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_DAP_IPCLKPORT_DAPCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_DAP_IPCLKPORT_DAPCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_SPDY, DIV_CLK_AUD_FM, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_SPDY_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_SPDY_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_ABOX_IPCLKPORT_BCLK_SPDY_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_IPCLKPORT_PCLKM, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_IPCLKPORT_PCLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_SECURE_IPCLKPORT_PCLKM, MUX_CLKCMU_DISPAUD_BUS_USER, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_SECURE_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_SECURE_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_SECURE_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_SECURE_IPCLKPORT_PCLKS, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_SECURE_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_SECURE_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_AD_APB_SMMU_DPU_SECURE_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_DISPAUD_UID_GPIO_DISPAUD_IPCLKPORT_PCLK, DIV_CLK_DISPAUD_BUSP, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_GPIO_DISPAUD_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_GPIO_DISPAUD_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_DISPAUD_UID_GPIO_DISPAUD_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_FSYS_UID_USB20PHY_IPCLKPORT_CLKCORE, PLL_USB, CLK_CON_GAT_CLK_BLK_FSYS_UID_USB20PHY_IPCLKPORT_CLKCORE_CG_VAL, CLK_CON_GAT_CLK_BLK_FSYS_UID_USB20PHY_IPCLKPORT_CLKCORE_MANUAL, CLK_CON_GAT_CLK_BLK_FSYS_UID_USB20PHY_IPCLKPORT_CLKCORE_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_FSYS_UID_FSYS_CMU_FSYS_IPCLKPORT_PCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_CLK_BLK_FSYS_UID_FSYS_CMU_FSYS_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_FSYS_UID_FSYS_CMU_FSYS_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_FSYS_UID_FSYS_CMU_FSYS_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_i_PCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_I_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_I_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_I_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_i_ACLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_I_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_I_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SSS_IPCLKPORT_I_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_i_ACLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_I_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_I_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_I_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_i_PCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_I_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_I_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RTIC_IPCLKPORT_I_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_I_ACLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_I_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_I_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_I_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_SDCLKIN, MUX_CLKCMU_FSYS_MMC_CARD_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_SDCLKIN_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_SDCLKIN_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_CARD_IPCLKPORT_SDCLKIN_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_I_ACLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_I_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_I_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_I_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_SDCLKIN, MUX_CLKCMU_FSYS_MMC_EMBD_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_SDCLKIN_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_SDCLKIN_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_EMBD_IPCLKPORT_SDCLKIN_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_bus_clk_early, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_BUS_CLK_EARLY_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_BUS_CLK_EARLY_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_BUS_CLK_EARLY_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_20PHYCTRL, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_20PHYCTRL_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_20PHYCTRL_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_20PHYCTRL_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_RSTnSYNC_CLK_FSYS_BUS_IPCLKPORT_CLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RSTNSYNC_CLK_FSYS_BUS_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RSTNSYNC_CLK_FSYS_BUS_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_RSTNSYNC_CLK_FSYS_BUS_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_AXI2AHB_FSYS_IPCLKPORT_aclk, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AXI2AHB_FSYS_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AXI2AHB_FSYS_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AXI2AHB_FSYS_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_AHBBR_FSYS_1x4_IPCLKPORT_HCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHBBR_FSYS_1X4_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHBBR_FSYS_1X4_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHBBR_FSYS_1X4_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_AHBBR_FSYS_IPCLKPORT_HCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHBBR_FSYS_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHBBR_FSYS_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHBBR_FSYS_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_GPIO_FSYS_IPCLKPORT_PCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_GPIO_FSYS_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_GPIO_FSYS_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_GPIO_FSYS_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_LHM_AXI_P_FSYS_IPCLKPORT_I_CLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_LHM_AXI_P_FSYS_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_LHM_AXI_P_FSYS_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_LHM_AXI_P_FSYS_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_LHS_AXI_D_FSYS_IPCLKPORT_I_CLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_LHS_AXI_D_FSYS_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_LHS_AXI_D_FSYS_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_LHS_AXI_D_FSYS_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_ACLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_PCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_PPMU_FSYS_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_SYSREG_FSYS_IPCLKPORT_PCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SYSREG_FSYS_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SYSREG_FSYS_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_SYSREG_FSYS_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_XIU_D_FSYS_IPCLKPORT_ACLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_XIU_D_FSYS_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_XIU_D_FSYS_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_XIU_D_FSYS_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_AHB2APB_FSYS_IPCLKPORT_HCLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHB2APB_FSYS_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHB2APB_FSYS_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_AHB2APB_FSYS_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_ADM_AHB_SSS_IPCLKPORT_HCLKM, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_ADM_AHB_SSS_IPCLKPORT_HCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_ADM_AHB_SSS_IPCLKPORT_HCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_ADM_AHB_SSS_IPCLKPORT_HCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_MMC_SDIO_IPCLKPORT_SDCLKIN, MUX_CLKCMU_FSYS_MMC_SDIO_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_SDIO_IPCLKPORT_SDCLKIN_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_SDIO_IPCLKPORT_SDCLKIN_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_SDIO_IPCLKPORT_SDCLKIN_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_MMC_SDIO_IPCLKPORT_I_ACLK, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_SDIO_IPCLKPORT_I_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_SDIO_IPCLKPORT_I_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_MMC_SDIO_IPCLKPORT_I_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ref_clk, MUX_CLKCMU_FSYS_USB30DRD_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_REF_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_REF_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_REF_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_US_64to128_FSYS_IPCLKPORT_aclk, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_US_64TO128_FSYS_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_US_64TO128_FSYS_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_US_64TO128_FSYS_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_30PHYCTRL_0, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_30PHYCTRL_0_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_30PHYCTRL_0_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_30PHYCTRL_0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_30PHYCTRL_1, MUX_CLKCMU_FSYS_BUS_USER, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_30PHYCTRL_1_CG_VAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_30PHYCTRL_1_MANUAL, CLK_CON_GAT_GOUT_BLK_FSYS_UID_USB30DRD_IPCLKPORT_ACLK_30PHYCTRL_1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_G3D_UID_G3D_CMU_G3D_IPCLKPORT_PCLK, DIV_CLK_G3D_BUSP, CLK_CON_GAT_CLK_BLK_G3D_UID_G3D_CMU_G3D_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_G3D_UID_G3D_CMU_G3D_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_G3D_UID_G3D_CMU_G3D_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_LHS_AXI_G3DSFR_IPCLKPORT_I_CLK, DIV_CLK_G3D_BUSP, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHS_AXI_G3DSFR_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHS_AXI_G3DSFR_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHS_AXI_G3DSFR_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_LHM_AXI_P_G3D_IPCLKPORT_I_CLK, DIV_CLK_G3D_BUSP, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHM_AXI_P_G3D_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHM_AXI_P_G3D_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHM_AXI_P_G3D_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_SYSREG_G3D_IPCLKPORT_PCLK, DIV_CLK_G3D_BUSP, CLK_CON_GAT_GOUT_BLK_G3D_UID_SYSREG_G3D_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_SYSREG_G3D_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_SYSREG_G3D_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_XIU_P_G3D_IPCLKPORT_ACLK, DIV_CLK_G3D_BUSP, CLK_CON_GAT_GOUT_BLK_G3D_UID_XIU_P_G3D_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_XIU_P_G3D_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_XIU_P_G3D_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_RSTnSYNC_CLK_G3D_BUSP_IPCLKPORT_CLK, DIV_CLK_G3D_BUSP, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_BUSP_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_BUSP_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_BUSP_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_AXI2APB_G3D_IPCLKPORT_ACLK, DIV_CLK_G3D_BUSP, CLK_CON_GAT_GOUT_BLK_G3D_UID_AXI2APB_G3D_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_AXI2APB_G3D_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_AXI2APB_G3D_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_RSTnSYNC_CLK_G3D_GPU_IPCLKPORT_CLK, MUX_CLK_G3D_BUSD, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_GPU_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_GPU_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_GPU_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_RSTnSYNC_CLK_G3D_BUSD_IPCLKPORT_CLK, MUX_CLK_G3D_BUSD, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_BUSD_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_BUSD_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_RSTNSYNC_CLK_G3D_BUSD_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_LHS_AXI_D_G3D_IPCLKPORT_I_CLK, MUX_CLK_G3D_BUSD, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHS_AXI_D_G3D_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHS_AXI_D_G3D_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHS_AXI_D_G3D_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_G3D_UID_LHM_AXI_G3DSFR_IPCLKPORT_I_CLK, MUX_CLK_G3D_BUSD, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHM_AXI_G3DSFR_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHM_AXI_G3DSFR_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_G3D_UID_LHM_AXI_G3DSFR_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_RSTnSYNC_CLK_ISP_VRA_IPCLKPORT_CLK, MUX_CLKCMU_ISP_VRA_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_VRA_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_VRA_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_VRA_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_RSTnSYNC_CLK_ISP_GDC_IPCLKPORT_CLK, MUX_CLKCMU_ISP_GDC_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_GDC_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_GDC_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_GDC_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_RSTnSYNC_CLK_ISP_BUSP_IPCLKPORT_CLK, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_BUSP_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_BUSP_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_BUSP_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_SYSREG_ISP_IPCLKPORT_PCLK, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_SYSREG_ISP_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_SYSREG_ISP_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_SYSREG_ISP_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_ISP_UID_ISP_CMU_ISP_IPCLKPORT_PCLK, DIV_CLK_ISP_BUSP, CLK_CON_GAT_CLK_BLK_ISP_UID_ISP_CMU_ISP_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_ISP_UID_ISP_CMU_ISP_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_ISP_UID_ISP_CMU_ISP_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_RSTnSYNC_CLK_ISP_BUSD_IPCLKPORT_CLK, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_BUSD_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_BUSD_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_RSTNSYNC_CLK_ISP_BUSD_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_LHM_ATB_CAMISP_IPCLKPORT_I_CLK, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHM_ATB_CAMISP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHM_ATB_CAMISP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHM_ATB_CAMISP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_LHM_AXI_P_ISP_IPCLKPORT_I_CLK, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHM_AXI_P_ISP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHM_AXI_P_ISP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHM_AXI_P_ISP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_LHS_AXI_D0_ISP_IPCLKPORT_I_CLK, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHS_AXI_D0_ISP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHS_AXI_D0_ISP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHS_AXI_D0_ISP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_ISP_PCLKM, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_ISP_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_ISP_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_ISP_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_ISP_PCLKS, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_ISP_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_ISP_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_ISP_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_MCSC_PCLKM, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_MCSC_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_MCSC_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_MCSC_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_MCSC_PCLKS, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_MCSC_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_MCSC_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_MCSC_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_NS_PCLKM, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_NS_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_NS_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_NS_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_NS_PCLKS, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_NS_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_NS_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_NS_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_S_PCLKM, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_S_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_S_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_S_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_S_PCLKS, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_S_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_S_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP0_S_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_NS_PCLKM, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_NS_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_NS_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_NS_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_NS_PCLKS, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_NS_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_NS_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_NS_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_S_PCLKM, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_S_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_S_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_S_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_S_PCLKS, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_S_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_S_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_SMMU_ISP1_S_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_VRA_PCLKM, MUX_CLKCMU_ISP_VRA_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_VRA_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_VRA_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_VRA_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_VRA_PCLKS, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_VRA_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_VRA_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_VRA_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_GDC_PCLKM, MUX_CLKCMU_ISP_GDC_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_GDC_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_GDC_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_GDC_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_APB_ASYNC_GDC_PCLKS, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_GDC_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_GDC_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_APB_ASYNC_GDC_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_XIU_P_ISP, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_P_ISP_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_P_ISP_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_P_ISP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_AXI2APB_ISP0, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_AXI2APB_ISP0_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_AXI2APB_ISP0_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_AXI2APB_ISP0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_AXI2APB_ISP1, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_AXI2APB_ISP1_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_AXI2APB_ISP1_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_AXI2APB_ISP1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_ISP, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_ISP_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_ISP_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_ISP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_MCSC, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_MCSC_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_MCSC_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_MCSC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_VRA, MUX_CLKCMU_ISP_VRA_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_VRA_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_VRA_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_VRA_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_GDC, MUX_CLKCMU_ISP_GDC_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_GDC_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_GDC_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_GDC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_VRA, MUX_CLKCMU_ISP_VRA_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_VRA_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_VRA_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_VRA_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_VRA, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_VRA_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_VRA_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_VRA_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_GDC, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_GDC_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_GDC_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCM_GDC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_GDC, MUX_CLKCMU_ISP_GDC_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_GDC_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_GDC_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_ASYNCS_GDC_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_XIU_D_ISP, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_D_ISP_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_D_ISP_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_XIU_D_ISP_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_PPMU_ISP0, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_PPMU_ISP0_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_PPMU_ISP0_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_PPMU_ISP0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_PCLK_PPMU_ISP0, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_PCLK_PPMU_ISP0_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_PCLK_PPMU_ISP0_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_PCLK_PPMU_ISP0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_SMMU_ISP0, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_SMMU_ISP0_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_SMMU_ISP0_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_SMMU_ISP0_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_PPMU_ISP1, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_PPMU_ISP1_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_PPMU_ISP1_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_PPMU_ISP1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_ACLK_SMMU_ISP1, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_SMMU_ISP1_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_SMMU_ISP1_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_ACLK_SMMU_ISP1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_is6p20p0_ISP_IPCLKPORT_PCLK_PPMU_ISP1, DIV_CLK_ISP_BUSP, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_PCLK_PPMU_ISP1_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_PCLK_PPMU_ISP1_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_IS6P20P0_ISP_IPCLKPORT_PCLK_PPMU_ISP1_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_ISP_UID_LHS_AXI_D1_ISP_IPCLKPORT_I_CLK, MUX_CLKCMU_ISP_BUS_USER, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHS_AXI_D1_ISP_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHS_AXI_D1_ISP_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_ISP_UID_LHS_AXI_D1_ISP_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_MFCMSCL_UID_MFCMSCL_CMU_MFCMSCL_IPCLKPORT_PCLK, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_CLK_BLK_MFCMSCL_UID_MFCMSCL_CMU_MFCMSCL_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_MFCMSCL_UID_MFCMSCL_CMU_MFCMSCL_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_MFCMSCL_UID_MFCMSCL_CMU_MFCMSCL_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_LHM_AXI_P_MFCMSCL_IPCLKPORT_I_CLK, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_LHM_AXI_P_MFCMSCL_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_LHM_AXI_P_MFCMSCL_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_LHM_AXI_P_MFCMSCL_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_MFC_P_IPCLKPORT_PCLKM, MUX_CLKCMU_MFCMSCL_MFC_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MFC_P_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MFC_P_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MFC_P_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_MFC_P_IPCLKPORT_PCLKS, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MFC_P_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MFC_P_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MFC_P_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_JPEG_P_IPCLKPORT_PCLKS, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_JPEG_P_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_JPEG_P_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_JPEG_P_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_MSCL_P_IPCLKPORT_PCLKM, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MSCL_P_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MSCL_P_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MSCL_P_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_MSCL_P_IPCLKPORT_PCLKS, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MSCL_P_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MSCL_P_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_MSCL_P_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_AXI2APB_MFCMSCL_IPCLKPORT_ACLK, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_AXI2APB_MFCMSCL_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_AXI2APB_MFCMSCL_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_AXI2APB_MFCMSCL_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_MFC_IPCLKPORT_Clk, MUX_CLKCMU_MFCMSCL_MFC_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_MFC_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_MFC_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_MFC_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_SYSREG_MFCMSCL_IPCLKPORT_PCLK, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_SYSREG_MFCMSCL_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_SYSREG_MFCMSCL_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_SYSREG_MFCMSCL_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_RSTnSYNC_CLK_MFCMSCL_MFC_IPCLKPORT_CLK, MUX_CLKCMU_MFCMSCL_MFC_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_MFC_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_MFC_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_MFC_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_RSTnSYNC_CLK_MFCMSCL_MSCL_IPCLKPORT_CLK, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_MSCL_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_MSCL_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_MSCL_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_NS_P_IPCLKPORT_PCLKS, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_NS_P_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_NS_P_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_NS_P_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_RSTnSYNC_CLK_MFCMSCL_APB_IPCLKPORT_CLK, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_APB_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_APB_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_RSTNSYNC_CLK_MFCMSCL_APB_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_G2D_P_IPCLKPORT_PCLKS, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_G2D_P_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_G2D_P_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_G2D_P_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_G2D_IPCLKPORT_Clk, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_G2D_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_G2D_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_G2D_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_PPMU_MFCMSCL_IPCLKPORT_PCLK, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_PPMU_MFCMSCL_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_PPMU_MFCMSCL_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_PPMU_MFCMSCL_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_PPMU_MFCMSCL_IPCLKPORT_ACLK, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_PPMU_MFCMSCL_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_PPMU_MFCMSCL_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_PPMU_MFCMSCL_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_SMMU_MFCMSCL_IPCLKPORT_CLK, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_SMMU_MFCMSCL_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_SMMU_MFCMSCL_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_SMMU_MFCMSCL_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_XIU_D_MFCMSCL_IPCLKPORT_ACLK, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_XIU_D_MFCMSCL_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_XIU_D_MFCMSCL_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_XIU_D_MFCMSCL_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_G2D_P_IPCLKPORT_PCLKM, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_G2D_P_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_G2D_P_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_G2D_P_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_JPEG_P_IPCLKPORT_PCLKM, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_JPEG_P_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_JPEG_P_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_JPEG_P_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_JPEG_IPCLKPORT_I_FIMP_CLK, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_JPEG_IPCLKPORT_I_FIMP_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_JPEG_IPCLKPORT_I_FIMP_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_JPEG_IPCLKPORT_I_FIMP_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_LHS_AXI_D_MFCMSCL_IPCLKPORT_I_CLK, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_LHS_AXI_D_MFCMSCL_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_LHS_AXI_D_MFCMSCL_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_LHS_AXI_D_MFCMSCL_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_NS_P_IPCLKPORT_PCLKM, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_NS_P_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_NS_P_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_NS_P_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_MSCL_IPCLKPORT_ACLK, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_MSCL_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_MSCL_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_MSCL_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_S_P_IPCLKPORT_PCLKM, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_S_P_IPCLKPORT_PCLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_S_P_IPCLKPORT_PCLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_S_P_IPCLKPORT_PCLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_S_P_IPCLKPORT_PCLKS, DIV_CLK_MFCMSCL_APB, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_S_P_IPCLKPORT_PCLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_S_P_IPCLKPORT_PCLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_SMMU_S_P_IPCLKPORT_PCLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_AXI_IPCLKPORT_ACLKM, MUX_CLKCMU_MFCMSCL_MSCL_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_AXI_IPCLKPORT_ACLKM_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_AXI_IPCLKPORT_ACLKM_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_AXI_IPCLKPORT_ACLKM_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MFCMSCL_UID_ASYNC_AXI_IPCLKPORT_ACLKS, MUX_CLKCMU_MFCMSCL_MFC_USER, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_AXI_IPCLKPORT_ACLKS_CG_VAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_AXI_IPCLKPORT_ACLKS_MANUAL, CLK_CON_GAT_GOUT_BLK_MFCMSCL_UID_ASYNC_AXI_IPCLKPORT_ACLKS_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_DMC_IPCLKPORT_ACLK, CLK_MIF_BUSD, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_CPU_IPCLKPORT_I_CLK, CLK_MIF_BUSD, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_CPU_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_CPU_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_CPU_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_RT_IPCLKPORT_I_CLK, CLK_MIF_BUSD, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_RT_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_RT_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_RT_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_ACLK, CLK_MIF_BUSD, CLK_CON_GAT_GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_RSTnSYNC_CLK_MIF_BUSD_IPCLKPORT_CLK, CLK_MIF_BUSD, CLK_CON_GAT_GOUT_BLK_MIF_UID_RSTNSYNC_CLK_MIF_BUSD_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_RSTNSYNC_CLK_MIF_BUSD_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_RSTNSYNC_CLK_MIF_BUSD_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_ACLK, CLK_MIF_BUSD, CLK_CON_GAT_GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_MIF_UID_MIF_CMU_MIF_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_CLK_BLK_MIF_UID_MIF_CMU_MIF_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_MIF_UID_MIF_CMU_MIF_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_MIF_UID_MIF_CMU_MIF_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_AXI2APB_SFR_IPCLKPORT_ACLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_AXI2APB_SFR_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_AXI2APB_SFR_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_AXI2APB_SFR_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_DDR_PHY_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_DDR_PHY_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DDR_PHY_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DDR_PHY_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PPMPU, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PPMPU_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PPMPU_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PPMPU_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_LHM_AXI_P_MIF_IPCLKPORT_I_CLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_P_MIF_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_P_MIF_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_P_MIF_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_PPMU_DMC_CPU_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_QE_DMC_CPU_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_RSTnSYNC_CLK_MIF_BUSP_IPCLKPORT_CLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_RSTNSYNC_CLK_MIF_BUSP_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_RSTNSYNC_CLK_MIF_BUSP_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_RSTNSYNC_CLK_MIF_BUSP_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DDR_PHY_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DDR_PHY_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DDR_PHY_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DDR_PHY_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_PPMPU_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_PPMPU_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_PPMPU_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_PPMPU_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_SECURE_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_SECURE_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_SECURE_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SFRAPB_BRIDGE_DMC_SECURE_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_SYSREG_MIF_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_SYSREG_MIF_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SYSREG_MIF_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_SYSREG_MIF_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_SECURE, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_SECURE_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_SECURE_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_SECURE_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PF, MUX_CLKCMU_MIF_BUSP_USER, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PF_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PF_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_DMC_IPCLKPORT_PCLK_PF_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_NRT_IPCLKPORT_I_CLK, CLK_MIF_BUSD, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_NRT_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_NRT_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_MIF_UID_LHM_AXI_D_MIF_NRT_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_MIF1_UID_MIF1_CMU_MIF1_IPCLKPORT_PCLK, MUX_CLKCMU_MIF1_SWITCH_USER, CLK_CON_GAT_CLK_BLK_MIF1_UID_MIF1_CMU_MIF1_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_MIF1_UID_MIF1_CMU_MIF1_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_MIF1_UID_MIF1_CMU_MIF1_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_WDT_CLUSTER0_IPCLKPORT_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_WDT_CLUSTER0_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_WDT_CLUSTER0_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_WDT_CLUSTER0_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_WDT_CLUSTER1_IPCLKPORT_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_WDT_CLUSTER1_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_WDT_CLUSTER1_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_WDT_CLUSTER1_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_MCT_IPCLKPORT_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_MCT_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_MCT_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_MCT_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_SYSREG_PERI_IPCLKPORT_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_SYSREG_PERI_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_SYSREG_PERI_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_SYSREG_PERI_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_BUSIF_TMU_IPCLKPORT_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSIF_TMU_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSIF_TMU_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSIF_TMU_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_OTP_CON_TOP_IPCLKPORT_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_OTP_CON_TOP_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_OTP_CON_TOP_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_OTP_CON_TOP_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_RSTnSYNC_CLK_PERI_BUS_IPCLKPORT_CLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_RSTNSYNC_CLK_PERI_BUS_IPCLKPORT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_RSTNSYNC_CLK_PERI_BUS_IPCLKPORT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_RSTNSYNC_CLK_PERI_BUS_IPCLKPORT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C6_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C6_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C6_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C6_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C0_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C0_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C0_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C0_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C1_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C1_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C1_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C1_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C2_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C2_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C2_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C2_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C3_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C3_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C3_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C3_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C4_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C4_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C4_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C4_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C5_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C5_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C5_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C5_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_PWM_MOTOR_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_PWM_MOTOR_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_PWM_MOTOR_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_PWM_MOTOR_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI0_SPI_EXT_CLK, MUX_CLKCMU_PERI_SPI0_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI0_SPI_EXT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI0_SPI_EXT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI0_SPI_EXT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI1_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI1_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI1_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI1_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI0_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI0_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI0_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI0_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI1_SPI_EXT_CLK, MUX_CLKCMU_PERI_SPI1_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI1_SPI_EXT_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI1_SPI_EXT_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_SPI1_SPI_EXT_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART0_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART0_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART0_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART0_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART0_EXT_UCLK, MUX_CLKCMU_PERI_UART_0_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART0_EXT_UCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART0_EXT_UCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART0_EXT_UCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART1_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART1_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART1_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART1_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART1_EXT_UCLK, MUX_CLKCMU_PERI_UART_1_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART1_EXT_UCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART1_EXT_UCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART1_EXT_UCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C3_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C3_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C3_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C3_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C1_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C1_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C1_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C1_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C0_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C0_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C0_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C0_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI1_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI1_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI1_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI1_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI0_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI0_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI0_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI0_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C2_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C2_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C2_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_HSI2C2_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_SECUCON_IPCLKPORT_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_SECUCON_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_SECUCON_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_SECUCON_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_AXI2AHB_PERI_IPCLKPORT_aclk, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_AXI2AHB_PERI_IPCLKPORT_ACLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_AXI2AHB_PERI_IPCLKPORT_ACLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_AXI2AHB_PERI_IPCLKPORT_ACLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_BUSP_BR_PERI_IPCLKPORT_HCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSP_BR_PERI_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSP_BR_PERI_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSP_BR_PERI_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_BUSP1_PERIC0_HCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_BUSP1_PERIC0_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_BUSP1_PERIC0_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_BUSP1_PERIC0_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_BUSP1_PERIC1_HCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_BUSP1_PERIC1_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_BUSP1_PERIC1_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_BUSP1_PERIC1_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(CLK_BLK_PERI_UID_PERI_CMU_PERI_IPCLKPORT_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_CLK_BLK_PERI_UID_PERI_CMU_PERI_IPCLKPORT_PCLK_CG_VAL, CLK_CON_GAT_CLK_BLK_PERI_UID_PERI_CMU_PERI_IPCLKPORT_PCLK_MANUAL, CLK_CON_GAT_CLK_BLK_PERI_UID_PERI_CMU_PERI_IPCLKPORT_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_BUSP1_PERIS0_IPCLKPORT_HCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSP1_PERIS0_IPCLKPORT_HCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSP1_PERIS0_IPCLKPORT_HCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_BUSP1_PERIS0_IPCLKPORT_HCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_GPIO_TOP_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_GPIO_TOP_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_GPIO_TOP_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_GPIO_TOP_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LHM_AXI_P_PERI_IPCLKPORT_I_CLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LHM_AXI_P_PERI_IPCLKPORT_I_CLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LHM_AXI_P_PERI_IPCLKPORT_I_CLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LHM_AXI_P_PERI_IPCLKPORT_I_CLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI0_SCLK, MUX_CLKCMU_PERI_USI0_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI0_SCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI0_SCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI0_SCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI1_SCLK, MUX_CLKCMU_PERI_USI1_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI1_SCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI1_SCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI1_SCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI2_SCLK, MUX_CLKCMU_PERI_USI2_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI2_SCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI2_SCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI2_SCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART2_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART2_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART2_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART2_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART2_EXT_UCLK, MUX_CLKCMU_PERI_UART_2_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART2_EXT_UCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART2_EXT_UCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_UART2_EXT_UCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI2_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI2_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI2_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_USI2_PCLK_ENABLE_AUTOMATIC_CLKGATING),
	CLK_GATE(GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C7_PCLK, MUX_CLKCMU_PERI_BUS_USER, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C7_PCLK_CG_VAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C7_PCLK_MANUAL, CLK_CON_GAT_GOUT_BLK_PERI_UID_LBLK_PERIC_IPCLKPORT_I2C7_PCLK_ENABLE_AUTOMATIC_CLKGATING),
};

/*====================The section of FIXED RATEs===================*/
unsigned int cmucal_fixed_rate_size = 25;


struct cmucal_clk_fixed_rate cmucal_fixed_rate_list[] = {
	FIXEDRATE(OSCCLK_APM, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_CAM, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_CMU, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_CORE, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_CPUCL0, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_CPUCL1, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_CPUCL2, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_DISPAUD, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(IOCLK_AUDIOCDCLK0, 10000000, EMPTY_CAL_ID),
	FIXEDRATE(IOCLK_AUDIOCDCLK2, 10000000, EMPTY_CAL_ID),
	FIXEDRATE(IOCLK_AUDIOCDCLK3, 100000000, EMPTY_CAL_ID),
	FIXEDRATE(CLK_DEBUG_DECON0, 100000000, EMPTY_CAL_ID),
	FIXEDRATE(TICK_USB, 48000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_FSYS, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(USB20_0_PHY_CLOCK, 100000000, EMPTY_CAL_ID),
	FIXEDRATE(USB30_PHY_0_RX0CLK, 100000000, EMPTY_CAL_ID),
	FIXEDRATE(USB30_PHY_0_TX0CLKOUT, 100000000, EMPTY_CAL_ID),
	FIXEDRATE(USB30_PHY_1_RX0CLK, 100000000, EMPTY_CAL_ID),
	FIXEDRATE(USB30_PHY_1_TX0CLKOUT, 100000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_G3D, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_ISP, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_MFCMSCL, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_MIF, 26000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_MIF1, 100000000, EMPTY_CAL_ID),
	FIXEDRATE(OSCCLK_PERI, 26000000, EMPTY_CAL_ID),
};

/*====================The section of FIXED FACTORs===================*/
unsigned int cmucal_fixed_factor_size = 2;


struct cmucal_clk_fixed_factor cmucal_fixed_factor_list[] = {
	FIXEDFACTOR(CLK_MIF_BUSD, MUX_CLK_MIF_DDRPHY_CLK2X, 7, CLK_CON_DIV_CLK_MIF_BUSD_ENABLE_AUTOMATIC_CLKGATING),
	FIXEDFACTOR(CLK_MIF1_BUSD, MUX_CLK_MIF1_DDRPHY_CLK2X, 7, CLK_CON_DIV_CLK_MIF1_BUSD_ENABLE_AUTOMATIC_CLKGATING),
};
