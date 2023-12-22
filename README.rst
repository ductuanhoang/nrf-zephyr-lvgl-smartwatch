.. _lvgl-sample:

Smart watch
######################

Overview
********

This sample application displays Smart watch

Requirements
************

Display shield and a board which provides a configuration
for Arduino connectors, for example:

- :ref:`1.28" ROUND LCD DISPLAY MODULE` and :ref:`nrf52840dk_nrf52840`
- :ref:`1.28" ROUND LCD DISPLAY MODULE` and :ref:`nrf52840dk_nrf5340`

Building and Running
********************

Example building for :ref:`nrf52840dk_nrf52840`:

.. zephyr-app-commands::
   :board: smart_watch_tuan_nrf52840
   :zephyr-app: build flash