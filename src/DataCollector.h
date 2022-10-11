#pragma once

#include "InfluxDBCollectorBase.h"

class DataCollector: public InfluxDBCollectorBase {
    public:
        DataCollector();
        bool shouldCollect();
        void collectData();
        void onPush();
        bool shouldPush();
};
