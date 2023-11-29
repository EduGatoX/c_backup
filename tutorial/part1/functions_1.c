#include <stdio.h>

void print_data(int age, char* name){
	printf("Hi, your name is %s, and your age is %d.\n", name, age);
}

int main() {
	print_data(20, "Pepito");

	return 0;
}
