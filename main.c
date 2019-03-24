#include <stdio.h>
#include "./wiring.h"

int main(int argc, char *argv[])
{
    setupWiringPi();

    int redPin = 7;
    int bluePin = 22;
    int iterations = 10;
    int delay = 250;

    setPinMode(redPin, OUTPUT);
    setPinMode(bluePin, OUTPUT);

    for (int i = 1; i <= iterations; i++)
    {
        // Red LED
        printf("Red LED on - #%d\n", i);
        writeToPin(redPin, HIGH);
        wait(delay);
        printf("Red LED off - #%d\n", i);
        writeToPin(redPin, LOW);

        wait(delay);

        // Blue LED
        printf("Blue LED on - #%d\n", i);
        writeToPin(bluePin, HIGH);
        wait(delay);
        printf("Blue LED off - #%d\n", i);
        writeToPin(bluePin, LOW);

        wait(delay);

    }

    return 0;
}
