all: test

test: test.s
	as -g -o test.o test.s
	gcc -o test test.o

clean:
	rm test.o

fclean: clean
	rm test
