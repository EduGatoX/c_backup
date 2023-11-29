#include <stdio.h>

float mean(int array[], int size) {
	// Return the mean value of the array
	float acc = 0; // accumulator of the function
	for (int i = 0; i < size; i++) {
		acc += array[i];
	}
	return acc / size;
}

int main() {
	// ask for size
	int size;
	printf("How many entries? ");
	scanf("%d", &size);
	
	// ask for ages
	int ages[size];
	for (int i = 0; i < size; i++) {
		printf("Enter age nº %d = ", i+1);
		scanf("%d", &ages[i]);
	}

	// print the mean value
	printf("The mean value of ages is %.*f\n", 2, mean(ages, size));

	return 0;
}
