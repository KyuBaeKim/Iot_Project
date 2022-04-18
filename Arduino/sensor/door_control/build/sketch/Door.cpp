#line 1 "d:\\workspace\\sensor\\door_control\\Door.cpp"
#include "Door.h"

Door::Door()
{

}

void Door::open(Servo &servo)
{
    Serial.print("open door");
    servo.write(180);
    delay(5000);
    servo.write(0);
}

