#include<stdio.h>


int main() {
	int a = 10, b = 20, c = 3;
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	c = (a++ == 11) && (b++ == 20);
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	c = (a++ == 11) && (b++ == 20);
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	c = (a++ == 12) || (b++ == 20);
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	c = (a++ == 12) || (b++ == 20);
	printf("a = %d, b = %d, c = %d\n", a, b, c);

}
