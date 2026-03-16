
#include <ESPAsyncWebServer.h>
#include "SPIFFS.h"

void inline webserver_init()
{
    AsyncWebServer server(80);
    if(!SPIFFS.begin(true))
        return;

    server.serveStatic("/", SPIFFS, "/index.html");

    server.begin();
}