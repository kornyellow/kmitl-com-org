#include <stdio.h>

int add_s(int a, int b);

int main(void) {
	int a = 16;
	int b = 4;
	int i = add_s(a, b);
	printf("%d + %d = %d\n", a, b, i);

	return 0;
}
