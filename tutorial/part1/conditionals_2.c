#include <stdio.h>

void print_day(int day_number){
	switch (day_number) {
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Not a valud number\n");
			printf("Enter a number between 1 and 7\n");
			break;
	}
}

int main() {
	print_day(2);
	return 0;
}
