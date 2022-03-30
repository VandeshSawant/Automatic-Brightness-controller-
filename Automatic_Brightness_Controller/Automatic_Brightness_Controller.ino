#define ldrpin 32

const int sensorMin = 4095;      // sensor minimum, discovered through experiment
const int sensorMax = 0;    // sensor maximum, discovered through experiment

int ledPins[] = {
  16,17,25,26,27,5,18,19};        // an array of pin numbers to which LEDs are attached
int pinCount = 8;                    // the number of pins (i.e. the length of the array)


void setup() {
  // initialize serial communication:
  Serial.begin(115200);
  pinMode(ldrpin, INPUT);

  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  }
}

void loop() {
  
  int sensorReading = analogRead(ldrpin);                               // read the sensor:
  
  int range = map(sensorReading, sensorMin, sensorMax, 0, 7);           // map the sensor range to a range of eight options:

  
  switch (range) {                                                      // do something different depending on the range value:
    case 0:   
      Serial.println(sensorReading);
      for (int thisPin = 0; thisPin < pinCount; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], LOW);                           // turn the pin on:
  }
      break;
      
    case 1:    
      Serial.println(sensorReading);
      for (int thisPin = 0; thisPin < 7; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], LOW);                           // turn the pin on:
  }
      for (int thisPin = 7; thisPin < 9; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], HIGH);                           // turn the pin off:
  }
  
      break;
      
    case 2:   
      Serial.println(sensorReading);
      for (int thisPin = 0; thisPin < 6; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], LOW);                           // turn the pin on:
  }
      for (int thisPin = 6; thisPin < 9; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], HIGH);                           // turn the pin off:
  }
      break;
      
    case 3:    
      Serial.println(sensorReading);
      for (int thisPin = 0; thisPin < 5; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], LOW);                           // turn the pin on:
  }
      for (int thisPin = 5; thisPin < 9; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], HIGH);                           // turn the pin off:
  }
      break;
      
    case 4:  
    Serial.println(sensorReading);
      for (int thisPin = 0; thisPin < 4; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], LOW);                           // turn the pin on:
  }
      for (int thisPin = 4; thisPin < 9; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], HIGH);                           // turn the pin off:
  }
      break;  

    case 5:  
    Serial.println(sensorReading);
      for (int thisPin = 0; thisPin < 3; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], LOW);                           // turn the pin on:
  }
      for (int thisPin = 3; thisPin < 9; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], HIGH);                           // turn the pin off:
  }
      break;

    case 6:  
    Serial.println(sensorReading);
      for (int thisPin = 0; thisPin < 2; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], LOW);                           // turn the pin on:
  }
      for (int thisPin = 2; thisPin < 9; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], HIGH);                           // turn the pin off:
  }
      break;

    case 7:  
    Serial.println(sensorReading);
      for (int thisPin = 0; thisPin < 1; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], LOW);                           // turn the pin on:
  }
      for (int thisPin = 1; thisPin < 9; thisPin++)              // loop 
  {
       digitalWrite(ledPins[thisPin], HIGH);                           // turn the pin off:
  }
      break;  
      }
  delay(500);        // delay in between reads for stability
}
