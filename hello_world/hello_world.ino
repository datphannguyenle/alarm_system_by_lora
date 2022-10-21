//* LoRa                  Arduino Uno R3
//* VCC                         3.3V
//* GND                         GND
//* RST                          9
//* DIO0                         2
//* EN/NSS                       10
//* MOSI                         11
//* MISO                         12
//* SCK                          13
#include <SPI.h>
#include <LoRa.h>

int bt = 4;
int bt1 = 5;
int bt2 = 6;
int bt3 = 7;
void setup() {
  Serial.begin(9600);
  pinMode(bt, INPUT);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  pinMode(bt3, INPUT);

  while (!Serial);

  Serial.println("LoRa Sender");

  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
  LoRa.setTxPower(20);

}

void loop() {

  if (!digitalRead(bt))
  {
    {
      // send packet
      LoRa.beginPacket();
      LoRa.print("tb1");
      LoRa.endPacket();
    }
    while (!digitalRead(bt));
  }
  if (!digitalRead(bt1))
  {
    {
      // send packet
      LoRa.beginPacket();
      LoRa.print("tb2");
      LoRa.endPacket();
    }
    while (!digitalRead(bt1));
  }
  if (!digitalRead(bt2))
  {
    {
      // send packet
      LoRa.beginPacket();
      LoRa.print("tb3");
      LoRa.endPacket();
    }
    while (!digitalRead(bt2));
  }
  if (!digitalRead(bt3))
  {
    {
      // send packet
      LoRa.beginPacket();
      LoRa.print("tb4");
      LoRa.endPacket();
    }
    while (!digitalRead(bt3));
  }
}
