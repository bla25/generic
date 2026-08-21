void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 0; i <= 255; i+=20){
  analogWrite(10, i);
  analogWrite(11, 255 - i);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(100);
  }    
  for(int i; i >= 0; i-=20){                  // wait for a second
  analogWrite(10, i);
  analogWrite(11, 255 - i);   // change state of the LED by setting the pin to the LOW voltage level
  delay(100); 
  }                     // wait for a second
}
