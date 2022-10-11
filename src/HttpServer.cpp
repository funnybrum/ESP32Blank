#include "Main.h"

char buffer[4096];

HttpServer::HttpServer(Logger* logger, NetworkSettings* networkSettings)
    :HttpServerBase(networkSettings, logger) {
}

void HttpServer::registerHandlers() {
    server->on("/", std::bind(&HttpServer::handle_root, this));
    server->on("/settings", std::bind(&HttpServer::handle_settings, this));
}

void HttpServer::handle_root() {
    server->sendHeader("Location","/settings");
    server->send(303);
}

void HttpServer::handle_settings() {
    wifi.parse_config_params(this);

    char network_settings[strlen_P(NETWORK_CONFIG_PAGE) + 32];
    wifi.get_config_page(network_settings);


    sprintf_P(
        buffer,
        CONFIG_PAGE,
        network_settings);
    server->send(200, "text/html", buffer);
}
