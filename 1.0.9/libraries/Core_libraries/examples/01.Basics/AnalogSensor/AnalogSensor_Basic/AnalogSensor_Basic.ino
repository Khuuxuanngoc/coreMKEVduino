/*
    How the code work:
        - Read ADC value (0->1023) from pin A1 => Display on Serial Monitor with Baudrate speed 115200.
*/

int analogPin       = A1;               // Declare input ADC pin

void setup(){
    Serial.begin(115200);
    Serial.println("MakerEdu.vn Demo Read Analog Sensor");
}

void loop(){
    // Read value (0->1023) from analogPin (A1)
    int sensorValue = analogRead(analogPin);

    // Display value on Serial Monitor
    Serial.println(sensorValue);

    delay(100); // Wait 100ms then repeat

}
