#include <stdio.h>

int main() {
	int k = 10;
	
	/*
	while (k < 20) {
		printf("k = %d\n", k);
		k++;
	}
	*/

	/*
	do {
		printf("k = %d\n", k);
		k++;
	} while (k < 20);
	*/

	for(int i = 0; i < 5; i++) {
		printf("Iteration number i = %d.\n", i);
	}

	return 0;
}
