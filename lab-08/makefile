all: Lab8_1 Lab8_2 Lab8_3

Lab8_1:
	as -g -o Lab8_1.o Lab8_1.s
	gcc -o Lab8_1 Lab8_1.o

Lab8_2:
	as -g -o Lab8_2.o Lab8_2.s
	gcc -o Lab8_2 Lab8_2.o

Lab8_3:
	as -g -o Lab8_3.o Lab8_3.s
	gcc -o Lab8_3 Lab8_3.o

clean:
	rm -rf Lab8_1.o Lab8_2.o Lab8_3.o

fclean: clean
	rm -rf Lab8_1 Lab8_2 Lab8_3
