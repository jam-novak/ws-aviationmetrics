// Serial Monitor nutzt Hardware Schnittstelle
// HC-12 nutzt Software Schnittstelle an Pin2=RX und Pin3=TX
// Achtung: HC-12 RX und TX über Kreuz an TX und RX

#include <SoftwareSerial.h>
#include <Arduino.h>

SoftwareSerial softSerial(2, 3); //RX, TX

void setup() {
Serial.begin(115200);
softSerial.begin(9600);
}

void loop() {
if(Serial.available() > 0){
//Eingabe am Serial Monitor and send over HC-12
String input = Serial.readString();
// Senden über HC-12
softSerial.println(input);
}

if(softSerial.available() > 1){
//Empfang am HC-12
String input = softSerial.readString();
// Ausgabe am Seral Monitor
Serial.println(input);
}
delay(20);
}