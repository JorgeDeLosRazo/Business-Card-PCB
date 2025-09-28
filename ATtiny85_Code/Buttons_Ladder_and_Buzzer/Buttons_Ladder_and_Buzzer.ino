
#define BUTTONS A0
#define BUZZER 33


//int buffer[20] = { 0 };
void buttonPressed();

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(115200);
}


void loop() {
  buttonPressed();

}

void buttonPressed(){
  float raw_val = analogRead(BUTTONS);
  if(raw_val > 1770 && raw_val < 1800){
    tone(BUZZER, 440);
    Serial.println("Button one pressed");
  } else if(raw_val > 1070 && raw_val < 1100) {
    tone(BUZZER, 440);
    Serial.println("Button two pressed");
  } else if( raw_val > 540 && raw_val < 560) {
    tone(BUZZER, 440);
    Serial.println("Button three pressed");
  } else if(raw_val > 200 && raw_val < 220) {
    tone(BUZZER, 440);
    Serial.println("RESET");
  } else {
    noTone(BUZZER);
  }
  Serial.print("\n");
  delay(100);
}
