#pragma once

#include <AP_HAL/AP_HAL_Boards.h>

#ifndef HAL_EXTERNAL_AHRS_ENABLED
#define HAL_EXTERNAL_AHRS_ENABLED BOARD_FLASH_SIZE > 1024
#endif

#ifndef AP_EXTERNAL_AHRS_BACKEND_DEFAULT_ENABLED
#define AP_EXTERNAL_AHRS_BACKEND_DEFAULT_ENABLED HAL_EXTERNAL_AHRS_ENABLED
#endif

#ifndef AP_EXTERNAL_AHRS_MICROSTRAIN_ENABLED
#define AP_EXTERNAL_AHRS_MICROSTRAIN_ENABLED AP_EXTERNAL_AHRS_BACKEND_DEFAULT_ENABLED
#endif

#ifndef AP_EXTERNAL_AHRS_VECTORNAV_ENABLED
#define AP_EXTERNAL_AHRS_VECTORNAV_ENABLED AP_EXTERNAL_AHRS_BACKEND_DEFAULT_ENABLED
#endif
