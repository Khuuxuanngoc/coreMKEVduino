/*
    How the code work:
        - Read ADC value (0->1023) from pin A1 => Display on Serial Monitor with Baudrate speed 9600.
*/

const int LDR_pin       = A1;               // Declare input ADC pin

void setup(){
    Serial.begin(9600);
    Serial.println("MakerEdu.vn Demo Read MKE-S02_LDR_light_sensor");
}

void loop(){
    // Read value (0->1023) from analogPin (A1)
    int sensorValue = analogRead(LDR_pin);

    // Display value on Serial Monitor
    Serial.println(sensorValue);

    delay(100); // Wait 100ms then repeat

}
