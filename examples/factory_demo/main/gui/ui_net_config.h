/*
 * SPDX-FileCopyrightText: 2015-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

#pragma once

#include <stdbool.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    UI_NET_EVT_LOARDING,
    UI_NET_EVT_START,
    UI_NET_EVT_START_PROV,
    UI_NET_EVT_GET_NAME,
    UI_NET_EVT_START_CONNECT,
    UI_NET_EVT_WIFI_CONNECTED,
    UI_NET_EVT_CLOUD_CONNECTED,
} ui_net_state_t;

typedef struct {
    char ID[32];
    char Seq[32];
    char lastDetectedTime[32];
} ui_net_data_t;

void ui_net_config_start(void (*fn)(void));
void ui_net_config_update_cb(ui_net_state_t state, ui_net_data_t *data, void *args);

#ifdef __cplusplus
}
#endif
