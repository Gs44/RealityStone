int electromagnet = 0;
int LED = 13;

void setup() {
  // init
  pinMode(electromagnet, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // On for two seconds
  digitalWrite(electromagnet, HIGH);
  digitalWrite(LED, HIGH);
  delay(2000);

  // Off for two seconds
  digitalWrite(electromagnet, LOW);
  digitalWrite(LED, LOW);
  delay(2000);
}
