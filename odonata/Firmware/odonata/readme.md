# odonata keyboard firmware

The Odonata is an ergonomic 4x12, 48 key unibody ergonomic keyboard powered by QMK with Vial support.

## Compiling and Flashing

Make example for this keyboard (after setting up your build environment, I prefer QMK MSYS CLI):

    qmk compile -kb odonata -km default

Flashing example for this keyboard:

    qmk flash -kb odonata -km default
    // or use QMK toolbox with auto-flash and press reset button


See the [build environment setup for base QMK](https://docs.qmk.fm/#/getting_started_build_tools) or the [build environment setup for Vial QMK](https://get.vial.today/docs/) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Physical reset button (preferred)**: Briefly press the button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `RESET` if it is available - default is hold fn key and tap top left key
