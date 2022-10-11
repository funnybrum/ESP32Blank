#pragma once

#include "esp32-base.h"
#include "HttpServer.h"
#include "DataCollector.h"

#define HOSTNAME "esp32-blank"

extern WiFiManager wifi;
extern Logger logger;
extern Settings settings;
extern DataCollector dataCollector;