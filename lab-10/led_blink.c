#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define HIGH 1
#define LOW 0

#define LED 7

int main (void) {
	printf("LED is blinking by wiringPi\n");

	if (wiringPiSetup() == -1) {
		printf("Setting up problem ... Abort!\n");
		return -1;
	}

	pinMode(LED, OUTPUT);
	for (int i = 0; i < 10; i++) {
		printf("Blinking time %d\n", i+1);
		digitalWrite(LED, HIGH);
		delay(500);
		digitalWrite(LED, LOW);
		delay(500);
	}
	return 0;
}
