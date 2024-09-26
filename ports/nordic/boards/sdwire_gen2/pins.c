// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2024 Talha Can Havadar for Badgerd Technologies B.V.
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_P0_02),     MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_PI_37),     MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO26), MP_ROM_PTR(&pin_P0_02) },

    { MP_ROM_QSTR(MP_QSTR_P0_09),     MP_ROM_PTR(&pin_P0_09) },
    { MP_ROM_QSTR(MP_QSTR_PI_16),     MP_ROM_PTR(&pin_P0_09) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO23), MP_ROM_PTR(&pin_P0_09) },

    { MP_ROM_QSTR(MP_QSTR_P0_10),     MP_ROM_PTR(&pin_P0_10) },
    { MP_ROM_QSTR(MP_QSTR_PI_18),     MP_ROM_PTR(&pin_P0_10) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO24), MP_ROM_PTR(&pin_P0_10) },

    { MP_ROM_QSTR(MP_QSTR_P0_29),     MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_PI_29),     MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO5),  MP_ROM_PTR(&pin_P0_29) },

    { MP_ROM_QSTR(MP_QSTR_P0_31),     MP_ROM_PTR(&pin_P0_31) },
    { MP_ROM_QSTR(MP_QSTR_PI_15),     MP_ROM_PTR(&pin_P0_31) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO22), MP_ROM_PTR(&pin_P0_31) },

    { MP_ROM_QSTR(MP_QSTR_P1_02),     MP_ROM_PTR(&pin_P1_02) },
    { MP_ROM_QSTR(MP_QSTR_PI_35),     MP_ROM_PTR(&pin_P1_02) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO19), MP_ROM_PTR(&pin_P1_02) },

    { MP_ROM_QSTR(MP_QSTR_P1_04),     MP_ROM_PTR(&pin_P1_04) },
    { MP_ROM_QSTR(MP_QSTR_PI_32),     MP_ROM_PTR(&pin_P1_04) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO12), MP_ROM_PTR(&pin_P1_04) },

    { MP_ROM_QSTR(MP_QSTR_P1_06),     MP_ROM_PTR(&pin_P1_06) },
    { MP_ROM_QSTR(MP_QSTR_PI_38),     MP_ROM_PTR(&pin_P1_06) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO20), MP_ROM_PTR(&pin_P1_06) },

    { MP_ROM_QSTR(MP_QSTR_P1_10),     MP_ROM_PTR(&pin_P1_10) },
    { MP_ROM_QSTR(MP_QSTR_PI_33),     MP_ROM_PTR(&pin_P1_10) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO13), MP_ROM_PTR(&pin_P1_10) },

    { MP_ROM_QSTR(MP_QSTR_P1_11),     MP_ROM_PTR(&pin_P1_11) },
    { MP_ROM_QSTR(MP_QSTR_PI_31),     MP_ROM_PTR(&pin_P1_11) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO6),  MP_ROM_PTR(&pin_P1_11) },

    { MP_ROM_QSTR(MP_QSTR_P1_12),     MP_ROM_PTR(&pin_P1_12) },
    { MP_ROM_QSTR(MP_QSTR_PI_28),     MP_ROM_PTR(&pin_P1_12) },
    { MP_ROM_QSTR(MP_QSTR_PI_ID_SC),  MP_ROM_PTR(&pin_P1_12) },

    { MP_ROM_QSTR(MP_QSTR_P1_13),     MP_ROM_PTR(&pin_P1_13) },
    { MP_ROM_QSTR(MP_QSTR_PI_27),     MP_ROM_PTR(&pin_P1_13) },
    { MP_ROM_QSTR(MP_QSTR_PI_ID_SD),  MP_ROM_PTR(&pin_P1_13) },

    { MP_ROM_QSTR(MP_QSTR_P1_15),     MP_ROM_PTR(&pin_P1_15) },
    { MP_ROM_QSTR(MP_QSTR_PI_36),     MP_ROM_PTR(&pin_P1_15) },
    { MP_ROM_QSTR(MP_QSTR_PI_GPIO16), MP_ROM_PTR(&pin_P1_15) },

    { MP_ROM_QSTR(MP_QSTR_AIN0), MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_AIN5), MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_AIN7), MP_ROM_PTR(&pin_P0_31) },

    { MP_ROM_QSTR(MP_QSTR_NFC1), MP_ROM_PTR(&pin_P0_09) },
    { MP_ROM_QSTR(MP_QSTR_NFC2), MP_ROM_PTR(&pin_P0_10) },

    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_P0_15) }, // Controls blue LED, high is on

    { MP_ROM_QSTR(MP_QSTR_MUX_SW),      MP_ROM_PTR(&pin_P1_00) },
    { MP_ROM_QSTR(MP_QSTR_N_DUTPWR_EN), MP_ROM_PTR(&pin_P1_09) },
    { MP_ROM_QSTR(MP_QSTR_N_HUBPWR_EN), MP_ROM_PTR(&pin_P0_08) },

    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_P1_15) },

    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_P1_12) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_P1_13) },

    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_P1_11) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_P1_10) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_P0_29) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};

MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
