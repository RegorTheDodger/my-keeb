Designed the RegorBoard 6000 TKL case in Onshape. The case was built
using two sketch and extrude operations:

- **Base extrusion** — 440mm x 135mm rectangle extruded to 8mm height
- **Wall extrusion** — inner rectangle (436mm x 131mm) extruded upward
  14mm to create the side walls that hold the PCB

The case uses a simple tray-mount style design — the PCB sits inside
the walls and is secured with M2 screws through the mounting holes.
The STEP file was exported from Onshape and committed to the case/
folder.

## PCB Finalisation

Used the Keyboard Layout Editor NG (editor.keyboard-tools.xyz) with
the Keychron Q1 preset as the base layout. The PCB generator produced
a complete KiCad project with:

- Cherry MX switch footprints
- SOD-123F diodes (one per switch, COL2ROW)
- Full copper routing on 2 layers
- Stabilizer footprints for spacebar and modifier keys
- Standard 19.05mm switch spacing

The generated KiCad files and Gerbers were committed to the pcb/ folder.

## What I learned

- Onshape's sketch and extrude workflow is surprisingly intuitive for
  someone new to CAD
- Tray mount is the simplest case design for a first build — no
  complex gaskets or top frame needed
- The keyboard-tools PCB generator saves enormous amounts of time
  compared to manual routing
- KiCad Gerber export requires both the layer files AND the drill file
  to be included in the zip for JLCPCB

## Next steps

- Take build progress photos
- Submit via the Hack Club KEEB grant submission form
