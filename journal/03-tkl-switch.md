# Journal Entry 3 — Switching to TKL

**Date:** August 17, 2026

## What changed and why

Originally I planned a full-size 104-key keyboard with numpad. During the PCB design phase I ran into a hard limitation — klepcbgen, the tool used to auto-generate the KiCad schematic from a keyboard layout, cannot handle more than a certain number of columns. A full 104-key layout with numpad exceeded that limit every time.

Rather than getting stuck, I made the pragmatic decision to switch to TKL (tenkeyless) — 87 keys, no numpad. This is actually a more popular layout in the custom keyboard community and has several advantages.

## What TKL means

TKL removes the numpad but keeps everything else — function row, number row, all letter keys, arrow keys, navigation cluster (Insert, Home, PgUp, Delete, End, PgDn). It's a complete keyboard for any use case.

## What I updated

- `firmware/config.h` — matrix changed from 8x14 to 6x17
- `firmware/keymap.c` — updated to LAYOUT_tkl_ansi
- `README.md` — updated specs and description
- `bom.csv` — reduced switch count from 110 to 90, total cost dropped from $117.29 to $103.29

## KiCad schematic generation

Used klepcbgen with a custom TKL JSON layout to auto-generate the KiCad schematic. Output: 87 keys, 6 rows, 17 columns. Opening in KiCad now to review and add the Orpheus Pico MCU connections.

## What I learned

Sometimes the tools dictate the design. A TKL is objectively a better first custom keyboard build — simpler matrix, cheaper PCB, and still a fully functional keyboard. Knowing when to adapt is part of engineering.
