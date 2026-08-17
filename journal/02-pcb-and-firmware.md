# Journal Entry 2 — PCB Design & Firmware

**Date:** August 17, 2026

## What I worked on

Two big things happened today: I found an open source reference PCB to base the RegorBoard 6000 on, and I wrote the initial QMK firmware files.

## PCB Research

Rather than starting completely from scratch, I found an open source 104-key keyboard called **Dorkyboard** by evnpwr on GitHub. It's a full-size board with numpad, licensed under CERN OHL v1.2 (open hardware), and designed in KiCad — exactly the stack I'm using.

I'm using it as a reference schematic, not a copy. The main change I need to make is swapping the microcontroller from the ATmega32U4 to the **Orpheus Pico** (RP2040), which is the microcontroller recommended by the Hack Club KEEB grant.

### Why the Orpheus Pico?
- It's grant-approved by Hack Club
- More powerful than the ATmega32U4 (dual-core 133MHz vs 16MHz)
- Cheaper
- QMK compatible
- Has more GPIO pins, giving more flexibility in the matrix wiring

## Firmware

I set up the initial QMK firmware files for the RegorBoard 6000:

- `config.h` — defines the keyboard name, matrix size (8 rows x 14 cols), pin assignments for the Orpheus Pico, and debounce settings
- `keymap.c` — full 104-key ANSI layout mapped out across the matrix
- `rules.mk` — build configuration targeting the RP2040 with NKRO enabled

The keymap covers all standard keys: alphas, function row, navigation cluster, and full numpad.

## What I learned

- A 104-key keyboard uses an 8x14 matrix (112 positions, 104 used)
- Each key needs a diode to prevent ghosting when multiple keys are pressed at once
- The Orpheus Pico has plenty of GPIO pins for a full-size matrix
- QMK firmware is surprisingly readable once you understand the LAYOUT macro structure

## Next steps

- Download and open the Dorkyboard KiCad files
- Swap ATmega32U4 for Orpheus Pico in the schematic
- Route the PCB and run DRC
- Export Gerbers
- Start case design in Onshape
