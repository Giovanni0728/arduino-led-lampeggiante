// Progetto: LED lampeggiante
// Autore: Giovanni Galofaro
// Scheda: Arduino Mega 2560 R3
//
// Il LED lampeggia continuamente.

const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);

  digitalWrite(LED, LOW);
  delay(1000);
}
