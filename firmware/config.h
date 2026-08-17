// RegorBoard 6000 - QMK Configuration
// Full-size 104-key keyboard with Orpheus Pico (RP2040)

#pragma once

#define MANUFACTURER    "RegorTheDodger"
#define PRODUCT         "RegorBoard 6000"

// Matrix size - 8 rows x 14 columns = 112 positions (104 used)
#define MATRIX_ROWS 8
#define MATRIX_COLS 14

// Orpheus Pico (RP2040) pin assignments
// Row pins
#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP3, GP4, GP5, GP6, GP7 }
// Column pins
#define MATRIX_COL_PINS { GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20, GP21 }

// Diode direction (COL2ROW for standard keyboard wiring)
#define DIODE_DIRECTION COL2ROW

// USB polling rate
#define USB_POLLING_INTERVAL_MS 1

// Key debounce in milliseconds
#define DEBOUNCE 5

// Silent switches - no need for extra debounce
#define FORCE_NKRO
