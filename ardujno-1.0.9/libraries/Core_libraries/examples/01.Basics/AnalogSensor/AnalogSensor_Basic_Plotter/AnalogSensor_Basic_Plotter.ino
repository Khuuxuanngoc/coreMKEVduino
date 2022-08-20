/*
    How the code work:
        - Read ADC value (0->1023) from pin A1 => Display on Serial Plotter with Baudrate speed 115200.
*/

int analogPin       = A1;               // Declare input ADC pin

void setup(){
    Serial.begin(115200);
    delay(1000);
    gridName_Plotter();
//    Serial.println("MakerEdu.vn Demo Read Analog Sensor");
}

void loop(){
    // Read value (0->1023) from analogPin (A1)
    int sensorValue = analogRead(analogPin);

    // show base line in Serial Plotter
    gridLine_Plotter();
    // Display value on Serial Plotter
    Serial.println(sensorValue);

    delay(1); // Wait 1ms then repeat

}

/*
  5V  -> 1023
  3V3 -> 676
  
*/
void gridLine_Plotter(){
  Serial.print(0);Serial.print(" ");
  Serial.print(676);Serial.print(" ");
}

void gridName_Plotter(){
  Serial.print("[0.0V]");Serial.print(" ");
  Serial.print("[3.3V]");Serial.print(" ");
  Serial.println("[AnalogValue]");
}
