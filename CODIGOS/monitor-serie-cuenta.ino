void setup() {
    Serial.begin(9600);
  }
  
  void loop() {
    for (int i = 1; i <= 10; i++) {
      Serial.print("Contando: ");
      Serial.println(i);
      delay(500);
    }
  
    delay(3000);
  }
  