#pragma once
#include "mqtt_client.h"

#ifdef __cplusplus
extern "C" {
#endif

void mqtt_app_start(void);
extern esp_mqtt_client_handle_t clientGlobal;

#ifdef __cplusplus
}
#endif