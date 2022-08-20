/*
  HCSR04 - Library for arduino, for HC-SR04 ultrasonic distance sensor.
  Created by Martin Sosic, June 11, 2016.
*/

#include "Arduino.h"
#include "UltraSonicDistanceSensor.h"

UltraSonicDistanceSensor::UltraSonicDistanceSensor(
        int triggerPin, int echoPin) {
    this->triggerPin = triggerPin;
    this->echoPin = echoPin;
    pinMode(this->triggerPin, OUTPUT);
    pinMode(this->echoPin, INPUT);
}

double UltraSonicDistanceSensor::measureDistanceCm() {
    // Make sure that trigger pin is LOW.
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    // Hold trigger for 10 microseconds, which is signal for sensor to measure distance.
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    // Measure the length of echo signal, which is equal to the time needed for sound to go there and back.
    unsigned long durationMicroSec = pulseIn(echoPin, HIGH, 36000);
    distanceCm = durationMicroSec / 2.0 * 0.0343;
    ML_dis = durationMicroSec;
    if (distanceCm == 0 || distanceCm > 600) {
        return -1.0 ;
    } else {
        return distanceCm;
    }
}

bool UltraSonicDistanceSensor::available(){
    if(millis() - lastTimeRead_ms >= DELAY_TIME_READ_ULTRASONIC){
        this->lastTimeRead_ms = millis();
        // Make sure that trigger pin is LOW.
        digitalWrite(this->triggerPin, LOW);
        delayMicroseconds(2);
        // Hold trigger for 10 microseconds, which is signal for sensor to measure distance.
        digitalWrite(this->triggerPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(this->triggerPin, LOW);
        // Measure the length of echo signal, which is equal to the time needed for sound to go there and back.
        unsigned long durationMicroSec = pulseIn(this->echoPin, HIGH, 36000);
        this->distanceCm = durationMicroSec / 2.0 * 0.0343;
        this->ML_dis = durationMicroSec;
        if (this->distanceCm == 0 || this->distanceCm > 600) {
            this->distanceCm =  -1.0 ;
        }
        return true;
    }else return false;
}

double UltraSonicDistanceSensor::getcm(){
    this->available();
    return this->distanceCm;
}

double UltraSonicDistanceSensor::getInch(){
    return this->distanceCm/2.54;
}