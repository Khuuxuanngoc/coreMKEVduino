/*
    How the code work:
        - Read ADC value (0->1023) from pin A1  => Display on Serial Monitor with Baudrate speed 9600.
                                                => Get Level (LOW-MID-HIGH) from ADC value, then control warning LED
*/
const int sensor_pin       = A1;               // Declare input ADC pin
int led_Warning_Pin             = D11;              // Declare Output Led pin
unsigned char warningFlag       = MID;              // Declare Level variable
int lowValueWarning             = 50;              // Set value of LOW Level
int highValueWarning            = 180;              // Set value of HIGH Level
int sensorValue                 = 0;                // Declare value variable
void setup(){
    Serial.begin(9600);                 // Baudrate 9600
    Serial.println("MakerEdu.vn Demo Read MKE-S09_MQ-135_Air_Quality_Sensor And Control Led");
    pinMode(led_Warning_Pin, OUTPUT);   // Cấu hình chân gắn Module led là OUTPUT
}
void loop(){
    // Read value (0->1023) from analogPin (A1)
    sensorValue = analogRead(sensor_pin);
    // Display value on Serial Monitor
    Serial.println(sensorValue);
    // Convert value to level
    if(sensorValue <= lowValueWarning){
        warningFlag = LOW;
    }else if(sensorValue >= highValueWarning){
        warningFlag = HIGH;
    }else if((sensorValue > lowValueWarning) && (sensorValue < highValueWarning)){
        warningFlag = MID;
    }
    /*
        LOW          MID         HIGH
    ------------]------------[----------->
    0          50           180         1023
    */
    // Check Level - control LED
    if(warningFlag == HIGH){
        Serial.println("Waring ON");
        digitalWrite(led_Warning_Pin, HIGH);
    }else if(warningFlag == LOW){
        Serial.println("Warning OFF");
        digitalWrite(led_Warning_Pin, LOW);
    }else if(warningFlag == MID){
        Serial.println("DO nothing");
    }
    delay(100); // Wait 100ms then repeat
}
