#include "mbed.h"

AnalogOut Aout(PA_4);

int main(void)
{
    while (1) {
        Aout = 0.25;
        ThisThread::sleep_for(2s);
        Aout = 0.5;
        ThisThread::sleep_for(2s);
        Aout = 0.75;
        ThisThread::sleep_for(2s);
    }
}