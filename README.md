# ESP32Blank

Template for ESP32 IOT controller. Fully functional, but "blank".

## What's included

 * Web server
 * InfluxDB integration
 * Settings that are configurable through the UI

Implementation is async and non-blocking.

## User Guide

1) Download, build the project and flash it to an ESP32 controller. Wait for the controller to start.
2) Connect to the esp32-blank WiFi network. It is open and does not require password.
3) Open http://192.168.0.1 . This will load the settings page where you can configure the SSID, the password and the hostname for the controller.
4) Click the restart button. The controller will restart and connect to the specified WiFi network.
5) Add functionality as needed (sensors, actuators, GPIO pins for managing different IOT stuff).
6) Update the settings page as needed.
7) Optionally start InfluxDB, configure telemetry collection and enable the InfluxDB integration in the settings page.
8) Leave feedback :) .

## Examples use-cases
The following are valid examples that I've built (but with the ESP8266 controller):
 * Lossnay LGH-80RVX-E controller exposing web interface for managing the controller and collecting telemetry for the exhaust and supply air.
 * Thermostat for the LG Therma-V heatpump allowing you to manage the pump through WEB interface.
 * Ventilation valve controller.
 * Air quality monitor with mulitple sensors sending the AQ data to an InfluxDB.
 * Many more...

## Building the project

The project uses a common set of tools that are availabe in another repo - https://github.com/funnybrum/esp8266-base. Clone the esp8266-base repo in the lib folder:

```
mkdir lib
cd lib
git clone git@github.com:funnybrum/ESP32Base.git
```