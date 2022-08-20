const int Relay_Pin = D9;
unsigned long delayTime = 5000; // 5000ms <=> 5s

void setup(){
    pinMode(Relay_Pin, OUTPUT);
}

void loop(){
    digitalWrite(Relay_Pin, HIGH);
    delay(delayTime);
    digitalWrite(Relay_Pin, LOW);
    delay(delayTime);
}