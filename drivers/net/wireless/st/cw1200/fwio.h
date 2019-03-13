/*
 * Firmware API for mac80211 ST-Ericsson CW1200 drivers
 *
 * Copyright (c) 2010, ST-Ericsson
 * Author: Dmitry Tarnyagin <dmitry.tarnyagin@lockless.no>
 *
 * Based on:
 * ST-Ericsson UMAC CW1200 driver which is
 * Copyright (c) 2010, ST-Ericsson
 * Author: Ajitpal Singh <ajitpal.singh@stericsson.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FWIO_H_INCLUDED
#define FWIO_H_INCLUDED

#define BOOTLOADER_CW1X60       "/*(DEBLOBBED)*/"
#define FIRMWARE_CW1X60		"/*(DEBLOBBED)*/"
#define FIRMWARE_CUT22		"/*(DEBLOBBED)*/"
#define FIRMWARE_CUT20		"/*(DEBLOBBED)*/"
#define FIRMWARE_CUT11		"/*(DEBLOBBED)*/"
#define FIRMWARE_CUT10		"/*(DEBLOBBED)*/"
#define SDD_FILE_CW1X60		"/*(DEBLOBBED)*/"
#define SDD_FILE_22		"/*(DEBLOBBED)*/"
#define SDD_FILE_20		"/*(DEBLOBBED)*/"
#define SDD_FILE_11		"/*(DEBLOBBED)*/"
#define SDD_FILE_10		"/*(DEBLOBBED)*/"

int cw1200_load_firmware(struct cw1200_common *priv);

/* SDD definitions */
#define SDD_PTA_CFG_ELT_ID 0xEB
#define SDD_REFERENCE_FREQUENCY_ELT_ID 0xc5
u32 cw1200_dpll_from_clk(u16 clk);

#endif
