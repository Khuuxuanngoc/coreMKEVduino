/*
    https://wiki.makeredu.vn/index.php/C%E1%BA%A3m_bi%E1%BA%BFn_si%C3%AAu_%C3%A2m_MKE-S01_ultra_sonic_distance_sensor
*/
#include "UltraSonicDistanceSensor.h"

const int PIN_TRIG = 13;
const int PIN_ECHO = 12;

UltraSonicDistanceSensor distanceSensor(PIN_TRIG, PIN_ECHO);  // Initialize sensor that uses digital pins 13 and 12.
double valuecm = 0;
void setup () {
    Serial.begin(9600);  // We initialize serial connection so that we could print values from sensor.
}

void loop () {
    // Every 100 miliseconds, do a measurement using the sensor and print the distance in centimeters.
    valuecm = distanceSensor.getcm();
    Serial.println(valuecm);
    
    delay(100);
}
