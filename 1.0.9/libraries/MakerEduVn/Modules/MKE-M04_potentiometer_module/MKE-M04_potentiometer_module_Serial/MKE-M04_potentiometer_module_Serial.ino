const int Potentiometer_Pin = D9;
unsigned long delayTime = 100; // 100ms <=> 0.1s

void setup(){
    Serial.begin(9600);
}

void loop(){
    int analogValue = analogRead(Potentiometer_Pin);
    Serial.println(analogValue);
    delay(delayTime);
}