#include <SoftwareSerial.h>
// Define a Software Serial object and the used pins
SoftwareSerial softSerial(8, 9); // RX, TX
// LED Pin
int LED = 13;
void setup(){
  Serial.begin(9600);
softSerial.begin(9600); // Soft Serial
pinMode(LED, OUTPUT); // Define LED pin mode
}
void loop(){
// Check if there is anything in the soft Serial Buffer
if (softSerial.available()){
// Read one value from the soft serial buffer and store it in the

String com = softSerial.readString();
// Act according to the value received

Serial.println(com);
}
}
