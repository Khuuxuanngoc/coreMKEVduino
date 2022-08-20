const int Buzzer_Pin = D9;
unsigned long delayTime = 1000; // 1000ms <=> 1s

void setup(){
    pinMode(Buzzer_Pin, OUTPUT);
}

void loop(){
    digitalWrite(Buzzer_Pin, HIGH);
    delay(delayTime);
    digitalWrite(Buzzer_Pin, LOW);
    delay(delayTime);
}