#include "Main.h"

Logger logger = Logger();
Settings settings = Settings();
WiFiManager wifi = WiFiManager(&logger, &settings.getSettings()->network);
HttpServer httpServer = HttpServer(&logger, &settings.getSettings()->network);

void setup()
{ 
    Serial.begin(115200);
    while (! Serial) {
        delay(1);
    }

    logger.begin();
    settings.begin();
    wifi.begin();
    httpServer.begin();

    wifi.connect();
}

void loop() {
    settings.loop();
    wifi.loop();
    httpServer.loop();

    logger.log("Update 12");

    delay(100);
}
