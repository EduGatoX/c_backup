#include <stdio.h>

void play(int* x) {
	int y = *x;

	y = y + 20;
	*x = y; // we save y in the address of memory given by &x

	printf("y = %d\n", y);
}

int main() {
	/*
	// define a variable
	int x = 10;
	int* ptrx = &x // extract the address with &x and the type of the address is int*

	float y = 0.5 // we can define another variable of a different type
	float* y = &y // and its pointer will be its type with *

	// we print the variable
	printf("x = %d\n", x);

	// and then its address in memory
	printf("ptr x = %p\n", &x);
	*/

	// Pointers are used to pass variables around functions as reference instead of value
	// so that there is no waste of memory in the process by copying stuff around.
	
	int x = 10;
	
	play(&x);
	
	// we are going to check if the functions play() affects x
	printf("x = %d\n", x);

	return 0;
}
