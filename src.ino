
#include <Arduino.h>
#include "config.h"
#include "vesc_uart.h"
#include "axis.h"
#include "webserver.cpp"
//#include <ESPAsyncTCP.h>
//#include <ESPAsyncWebServer.h>
#include <AsyncTCP.h>

MachineConfig config;

#include <WiFi.h>

// Deine WLAN-Zugangsdaten
const char* ssid = "datenschleuder";
const char* password = "3DsAmvUbdeVxzz6U7ozi";

// Wir erstellen ein Server-Objekt auf Port 80 (Standard für HTTP)
//WiFiServer server(80);

void setup() {
  Serial.begin(115200);

  while (!Serial) { ; }

  // Mit dem WLAN verbinden
  Serial.println();
  Serial.print("Verbinde mit ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WLAN verbunden.");
  Serial.println("IP-Adresse: ");
  Serial.println(WiFi.localIP());

    vesc_init();
    axis_init();
    webserver_init();
}

void loop() {
     axis_update();
}

// void setup()
// {
//     Serial.begin(115200);

//     vesc_init();
//     axis_init();
//     webserver_init();
// }

// void loop()
// {
//     axis_update();
// }
