# odonata_split keyboard firmware

The Odonata-Split is an ergonomic 4x6 (x2), 48 key split ergonomic keyboard powered by QMK with Vial support.

## Compiling and Flashing

Make example for this keyboard (after setting up your build environment, I prefer QMK MSYS CLI):

    qmk compile -kb odonata_split -km default

Flashing example for this keyboard:

    qmk flash -kb odonata_split -km default
    // or use QMK toolbox with auto-flash and press reset button

Note: When first flashing boards, please flash both separately and test whether they work properly when plugged in together. Afterward, if you update keymaps you only need to flash the master side.


See the [build environment setup for base QMK](https://docs.qmk.fm/#/getting_started_build_tools) or the [build environment setup for Vial QMK](https://get.vial.today/docs/) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Physical reset button (preferred)**: Briefly press the button under the pro micro on the plugged in side
* **Keycode in layout**: Press the key mapped to `RESET` if it is available - default is hold fn key and tap top left key
