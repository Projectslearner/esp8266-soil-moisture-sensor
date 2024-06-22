/*
    Project name : ESP8266 Soil Moisture Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-soil-moisture-sensor
*/

const int soilMoisturePin = A0; // Analog pin connected to the soil moisture sensor
int soilMoistureValue; // Variable to store the sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the soil moisture sensor
  soilMoistureValue = analogRead(soilMoisturePin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Soil Moisture Value: ");
  Serial.println(soilMoistureValue);

  // Check if soil is dry, moist, or wet based on the sensor value
  if (soilMoistureValue < 300) {
    Serial.println("Soil is dry");
  } else if (soilMoistureValue < 700) {
    Serial.println("Soil is moist");
  } else {
    Serial.println("Soil is wet");
  }

  delay(1000); // Wait 1 second before taking another reading
}
