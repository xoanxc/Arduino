// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  Serial.println("Iniciando comunicación USB...");
}

void loop()
{
  digitalWrite(10, HIGH);
  Serial.println("1");
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  Serial.println("0");
  delay(1000); // Wait for 1000 millisecond(s)
}