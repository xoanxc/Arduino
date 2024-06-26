// C++ code
//
int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode (8, OUTPUT);
}

void loop()
{
  // read the state of the pushbutton value
  buttonState = digitalRead(2);
  // check if pushbutton is pressed.  if it is, the
  // buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on  
    digitalWrite(LED_BUILTIN, HIGH);
    // Encender motor
    digitalWrite (8, HIGH);
  } else {
    // turn LED off
    digitalWrite(LED_BUILTIN, LOW);
    // Apagar motor
    digitalWrite (8, LOW);
  }
   
  delay(10); // Delay a little bit to improve simulation performance
}