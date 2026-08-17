// RegorBoard 6000 TKL - QMK Configuration
// TKL 87-key keyboard with Orpheus Pico (RP2040)

#pragma once

#define MANUFACTURER    "RegorTheDodger"
#define PRODUCT         "RegorBoard 6000 TKL"

// Matrix size - 6 rows x 17 columns = 87 keys
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

// Orpheus Pico (RP2040) pin assignments
// Row pins
#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP3, GP4, GP5 }
// Column pins
#define MATRIX_COL_PINS { GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20, GP21, GP22 }

// Diode direction
#define DIODE_DIRECTION COL2ROW

// USB polling rate
#define USB_POLLING_INTERVAL_MS 1

// Debounce
#define DEBOUNCE 5

#define FORCE_NKRO
