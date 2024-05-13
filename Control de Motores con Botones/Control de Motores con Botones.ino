// C++ code
//

int Adelante = 0; //2
int Izquierda = 0; //1
int Derecha = 0; //3

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  Adelante = digitalRead(2);
  Izquierda = digitalRead(1);
  Derecha = digitalRead(3);
  
  if (Adelante == HIGH)
  {
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  }
  if (Izquierda == HIGH)
  {
    digitalWrite(12, HIGH);
  }
  if (Derecha == HIGH)
  {
	digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  
}
