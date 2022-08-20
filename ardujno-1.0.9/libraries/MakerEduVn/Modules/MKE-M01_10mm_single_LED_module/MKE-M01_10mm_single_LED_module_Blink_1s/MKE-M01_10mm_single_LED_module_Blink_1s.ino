const int Led_Pin = D9;
unsigned long delayTime = 1000; // 1000ms <=> 1s

void setup(){
    pinMode(Led_Pin, OUTPUT);
}

void loop(){
    digitalWrite(Led_Pin, HIGH);
    delay(delayTime);
    digitalWrite(Led_Pin, LOW);
    delay(delayTime);
}