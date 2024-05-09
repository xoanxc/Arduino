// C++ code
//
void setup()
{
  // Establezco los pines de salida
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);  
}

void loop()
{
  // Avanzar dutante 3 segundos
  digitalWrite(12, HIGH);
  digitalWrite(13; HIGH);
  delay(3000); //Espero 3 segundos
  digitalWrite(12, LOW);
  digitalWrite(13; LOW);
  
  // Girar a la derecha durante 2 segundos
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  
  // Girar a la izquierda durante 1 segundo
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  
  // Avanzar dutante 4 segundos
  digitalWrite(12, HIGH);
  digitalWrite(13; HIGH);
  delay(4000); //Espero 3 segundos
  digitalWrite(12, LOW);
  digitalWrite(13; LOW);
}