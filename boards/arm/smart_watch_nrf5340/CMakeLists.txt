# Copyright (c) 2022 Nordic Semiconductor ASA.
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause

if ((CONFIG_SMART_WATCH_BOARD_NRF7002DK_NRF5340_CPUAPP OR CONFIG_SMART_WATCH_BOARD_NRF7002DK_NRF5340_CPUAPP_NS)
    AND CONFIG_BOARD_ENABLE_CPUNET)
zephyr_library()
zephyr_library_sources(smart_watch_nrf5340_cpunet_reset.c)
endif()
