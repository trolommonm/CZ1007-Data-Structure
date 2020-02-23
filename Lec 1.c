#include <stdio.h> // standard input output library
#include <math.h> // math library

int main() {
	printf("Hello World!\n");

	// increment operators: prefix vs postfix mode
	// ++num or num++
	int num = 4;
	printf("value of num is: %d\n", num++);
	printf("value of num is: %d\n", num);
	num = 4;
	printf("value of num is: %d\n", ++num);
	printf("value of num is: %d\n", num);

	return 0;
}