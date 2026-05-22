Arduino Code 

// Temperature Monitoring System Using TMP36 
int tempPin = A0;     // TMP36 connected to A0 
int ledPin = 13;      
// LED connected to pin 13 
float temperature = 0; 
void setup() 
{ 
} 
pinMode(ledPin, OUTPUT); 
Serial.begin(9600); 
Serial.println("Temperature Monitoring System Started"); 
void loop() 
{ 
// Read sensor value 
int sensorValue = analogRead(tempPin); 
// Convert analog value to voltage 
float voltage = sensorValue * (5.0 / 1023.0); 
// Convert voltage to temperature in Celsius 
temperature = (voltage - 0.5) * 100; 
// Display temperature 
Serial.print("Temperature: "); 
Serial.print(temperature); 
Serial.println(" °C"); 
// Threshold condition 
if (temperature > 30) 
{ 
} 
digitalWrite(ledPin, HIGH); 
Serial.println("High Temperature Alert - LED ON"); 
else 
{ 
} 
digitalWrite(ledPin, LOW); 
Serial.println("Temperature Normal - LED OFF"); 
Serial.println("-------------------"); 
delay(1000); 
}
