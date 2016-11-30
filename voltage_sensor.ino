#include "VoltageSensor.h"

int voltageSensorPin = A0;

VoltageSensor voltageSensor = VoltageSensor(voltageSensorPin);

void setup() {
  Serial.begin(115200);
}

void loop() {

  Serial.print("Percent reading = ");
  Serial.println(voltageSensor.getBatteryPercentage());
  
  Serial.print("Voltage reading = ");
  Serial.println(voltageSensor.getBatteryVoltage());

  
  Serial.print("Sensor value = ");
  Serial.println(voltageSensor.getSensorValue());
  
  Serial.print("Battery Index = ");
  Serial.println(voltageSensor.getBatteryIndex());

  delay(500);
}
