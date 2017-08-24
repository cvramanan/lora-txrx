#include <Ultrasonic.h>



#include <SoftwareSerial.h>
// Define a Software Serial object and the used pins
SoftwareSerial softSerial(8, 9); // RX, TX>


Ultrasonic ultrasonic(12, 13);
void setup(){
Serial.begin(9600); // Normal Serial
softSerial.begin(9600); // Soft Serial
}
void loop(){
// Check for received characters from the computer

Serial.println(ultrasonic.distanceRead());
// Write what is received to the soft serial
softSerial.println(ultrasonic.distanceRead());
delay(1000);

}
