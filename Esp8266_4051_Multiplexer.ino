/*
 ESP8266 4051 Multiplexer by Brian Lough
 
 An example showing how to use a 4051 multiplexer with an esp8266
 to connect up to 8 analog sensors.

 Wiring:
 Wemos ->  4051
 ---------------
 D4    ->   S0 (A)
 D3    ->   S1 (B)
 D2    ->   S2 (C)
 A0    ->   Common
 3.3v  ->   VCC
 G     ->   GND
 G     ->   Inhibit
 G     ->   VEE  
 
 4051 Option pins are then wired to whatever Analog sensors required

 One thing to note: say for example if you only require 2 analog sensors,
 You can just wire up S0(A) and connect S1 & S2 to GND and you will be 
 able to switch between option 1 and option 2 pins.
 Same goes for up to 4 pins (just use S0 & S1)
*/

#define MUX_A D4
#define MUX_B D3
#define MUX_C D2

#define ANALOG_INPUT A0


void setup() {
  //Deifne output pins for Mux
  pinMode(MUX_A, OUTPUT);
  pinMode(MUX_B, OUTPUT);     
  pinMode(MUX_C, OUTPUT);     
}

void changeMux(int c, int b, int a) {
  digitalWrite(MUX_A, a);
  digitalWrite(MUX_B, b);
  digitalWrite(MUX_C, c);
}

void loop() {
  float value;
  
  changeMux(LOW, LOW, LOW);
  value = analogRead(ANALOG_INPUT); //Value of the sensor connected Option 0 pin of Mux
  
  changeMux(LOW, LOW, HIGH);
  value = analogRead(ANALOG_INPUT); //Value of the sensor connected Option 1 pin of Mux
  
  changeMux(LOW, HIGH, LOW);
  value = analogRead(ANALOG_INPUT); //Value of the sensor connected Option 2 pin of Mux

  changeMux(LOW, HIGH, HIGH);
  value = analogRead(ANALOG_INPUT); //Value of the sensor connected Option 3 pin of Mux

  changeMux(HIGH, LOW, LOW);
  value = analogRead(ANALOG_INPUT); //Value of the sensor connected Option 4 pin of Mux

  changeMux(HIGH, LOW, HIGH);
  value = analogRead(ANALOG_INPUT); //Value of the sensor connected Option 5 pin of Mux

  changeMux(HIGH, HIGH, LOW);
  value = analogRead(ANALOG_INPUT); //Value of the sensor connected Option 6 pin of Mux

  changeMux(HIGH, HIGH, HIGH);
  value = analogRead(ANALOG_INPUT); //Value of the sensor connected Option 7 pin of Mux
  
}
