
// C++ code
//
//

int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT); // Configura A2 como entrada para el botón
  pinMode(A3, INPUT); // Configura A3 como entrada para el botón
  Serial.begin(9600); // Llamada a Serial.begin una vez
}

void loop()
{
  // Leer el valor en el pin analógico 0:
  sensorValue = analogRead(A0);
  // Imprimir el valor leído:
  Serial.println(sensorValue);
  delay(10); // Retraso pequeño para mejorar el rendimiento de la simulación
  
  // Leer el valor en el pin analógico 1:
  sensorValue = analogRead(A1);
  // Imprimir el valor leído:
  Serial.println(sensorValue);
  delay(10); // Retraso pequeño para mejorar el rendimiento de la simulación
  
  // Leer el estado del botón conectado al pin analógico 2:
  int buttonState2 = digitalRead(A2);
  // Imprimir el estado del botón:
  Serial.println(buttonState2);
  
  // Leer el estado del botón conectado al pin analógico 3:
  int buttonState3 = digitalRead(A3);
  // Imprimir el estado del botón:
  Serial.println(buttonState3);
  
  delay(10); // Retraso pequeño para mejorar el rendimiento de la simulación
}
