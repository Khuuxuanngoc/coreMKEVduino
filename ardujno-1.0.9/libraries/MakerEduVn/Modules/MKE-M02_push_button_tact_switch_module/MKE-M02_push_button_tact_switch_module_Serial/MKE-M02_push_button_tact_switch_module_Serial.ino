const int Button_Pin = D9;
unsigned long delayTime = 100; // 100ms <=> 0.1s

void setup(){
    Serial.begin(9600);
    pinMode(Button_Pin, INPUT_PULLUP);
}

void loop(){
    int btnState = digitalRead(Button_Pin);
    Serial.println(btnState);
    delay(delayTime);
}