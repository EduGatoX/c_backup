#include <stdio.h>

int main() {

	int ages[8];
	for (int i = 0; i < 8; i++) {
		printf("Enter age %d = ", i+1);
		scanf("%d", &ages[i]);
	}

	for (int i = 0; i < 8; i++) {
		printf("Entered age %d = %d\n", i+1, ages[i]);
	}

//	int ages[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	/*
	int ages[8];
	ages[2] = 15;

	int result = ages[2] + 20;*/

	return 0;
}
