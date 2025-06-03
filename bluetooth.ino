#include <SoftwareSerial.h>

SoftwareSerial BTserial(10, 11); // RX | TX

void setup() {
  Serial.begin(9600);        
  BTserial.begin(9600);      // Bluetooth baud rate
  pinMode(13, OUTPUT);       // LED pin
}

void loop() {
  if (BTserial.available()) {
    char data = BTserial.read();
    Serial.print("Received: ");
    Serial.println(data);

    if (data == '1') {
      digitalWrite(13, HIGH); // LED ON
    }
    else if (data == '0') {
      digitalWrite(13, LOW);  // LED OFF
    }
  }
}
