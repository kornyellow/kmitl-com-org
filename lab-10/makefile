all: led_blink_s led_blink_c

led_blink_c: led_blink.c
	gcc led_blink.c -lwiringPi -o led_blink_c

led_blink_s: led_blink.s
	gcc led_blink.s -lwiringPi -o led_blink_s

clean:
	rm led_blink_c led_blink_s
