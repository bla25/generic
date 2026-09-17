#define BUTTON_PIN 2
#define LED_PIN 3 
void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN,INPUT_PULLUP);
  pinMode(LED_PIN,OUTPUT);
}
void loop() {
  int counter = 0;
  int buttonState = digitalRead(BUTTON_PIN);
  if(buttonState == LOW){
    counter = counter + 1;
    Serial.println(counter);
    delay(1000);
     
  }
  
  

}
