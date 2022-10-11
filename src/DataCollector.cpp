#include "Main.h"
#include "DataCollector.h"

DataCollector::DataCollector():
    InfluxDBCollectorBase(&logger,
                          NULL,
                          &settings.getSettings()->influxDbCollector,
                          &settings.getSettings()->network) {
}

bool DataCollector::shouldCollect() {
    return millis() > 10000;
}

void DataCollector::collectData() {
    append("uptime", millis() / 1000);
    append("const_temp", 22.8f, 1);
}

bool DataCollector::shouldPush() {
    return false;
}   

void DataCollector::onPush() {
}