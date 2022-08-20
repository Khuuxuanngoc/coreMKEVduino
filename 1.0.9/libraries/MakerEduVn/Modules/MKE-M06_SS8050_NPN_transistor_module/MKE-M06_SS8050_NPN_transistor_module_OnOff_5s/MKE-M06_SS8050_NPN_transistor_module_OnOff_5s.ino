const int SS8050_Pin = D9;
unsigned long delayTime = 5000; // 5000ms <=> 5s

void setup(){
    pinMode(SS8050_Pin, OUTPUT);
}

void loop(){
    digitalWrite(SS8050_Pin, HIGH);
    delay(delayTime);
    digitalWrite(SS8050_Pin, LOW);
    delay(delayTime);
}