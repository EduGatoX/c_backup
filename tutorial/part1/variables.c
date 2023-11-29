#include <stdio.h>

int main(){
	// declare a character and a number
	char x; // defines a slot in memory for holding a character
	int y; // defines a slot in memory for holding an integer

	/* short	: 16 bits
	 * int		: 32 bits
	 * long		: 64 bits */
	
	// Unsigned uses all the bits for holding positive numbers
	
	x = 'c';
	y = 25;

	int z = 2 * y;

	printf("Hello world\n");
	printf("y = %d\n", y); // %d is a placeholder for printing a decimal number
	printf("z = %d\n", z);
	printf("x = %c, y = %d\n", x, y); // %c is a placeholder for printing a character

	return 0;
}
