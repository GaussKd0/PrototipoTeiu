#include <NewPing.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

//------------------------------------------

// Defina os pinos Trig e Echo do sensor HC-SR04
#define TRIGGER_PIN D1
#define ECHO_PIN D2

NewPing sonar(TRIGGER_PIN, ECHO_PIN);

ESP8266WebServer server(80);
const char* ssid = "wifi";
const char* password = "senha";

//------------------------------------------

void setup()
{
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  server.on("/", webpage);
  server.begin();
}

void loop()
{
  server.handleClient();

  delay(2000); // Delay entre as medições

  unsigned int distance = sonar.ping_cm(); // Mede a distância em centímetros

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Atualize o valor da variável 'x' com a distância medida
  String x = String(distance) + " cm";
  String jsCode = "document.getElementById('tanque1').innerHTML = '" + x + "';";

  // Execute o código JavaScript no navegador
  server.send(200, "text/html", "<script>" + jsCode + "</script>");
}

void webpage()
{
  server.send(200, "text/html", webpageCode);
}

