#include <stdio.h>

int main() {
	int x = 25;
	int y = 100;

	// Examples
	
	if (x == 20) {
		printf("x is equal to 20\n");
	} else {
		printf("x is not equal to 20\n");
	}

	if (x >= 20 && x <= 30){
		printf("x is between 20 and 30\n");
	}

	if (x < 20 || x > 30){
		printf("x is not between 20 and 30\n");
	}

	// Combining more conditionals
	if ((x > 20 && x < 30) || (y > 50 && y < 100)){
		printf("x is between 20 and 30, and y is between 50 and 100\n");
	}

	return 0;
}
