/*
 * Simple Water Quality Monitoring System
 * Sathiya S (ECE) - Surya Engineering College
 */

#include <SoftwareSerial.h>

int tdsPin = A0;   // TDS Sensor
int phPin = A1;    // pH Sensor
int relayPin = 8;  // Water Pump (Relay)

SoftwareSerial gsm(10, 11); // GSM RX, TX

void setup() {
  Serial.begin(9600);
  gsm.begin(9600);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Start pump
}

void loop() {
  // Read Sensors
  int tdsValue = map(analogRead(tdsPin), 0, 1023, 0, 1000); 
  float phValue = (analogRead(phPin) * 14.0) / 1023.0;

  // Print to Serial Monitor
  Serial.print("TDS: "); Serial.print(tdsValue);
  Serial.print(" ppm | pH: "); Serial.println(phValue);

  // Check Contamination (TDS > 500 or pH abnormal)
  if (tdsValue > 500 || phValue < 6.5 || phValue > 8.5) {
    digitalWrite(relayPin, LOW); // Stop pump
    Serial.println("Alert! Contamination Detected.");
    
    // Send SMS
    gsm.println("AT+CMGF=1"); 
    delay(1000);
    gsm.println("AT+CMGS=\"+919876543210\""); // Put your phone number here
    delay(1000);
    gsm.println("EMERGENCY ALERT: Heavy Metal Contamination Detected! Pump Stopped.");
    delay(1000);
    gsm.write(26); // Send SMS command (Ctrl+Z)
    
    delay(10000); // Wait 10 seconds before next check
  } 
  else {
    digitalWrite(relayPin, HIGH); // Keep pump running
  }
  
  delay(2000); 
}
