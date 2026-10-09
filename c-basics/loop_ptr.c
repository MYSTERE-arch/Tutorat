#include <stdio.h>

//Read an integer and write it at the adress p
int r_int(const char *invite, int *p) {
	printf("%s", invite);
	return scanf("%d", p);
}

//Double the value pointed by p.
void doubles(int *p) {
	*p = *p*2;
}

//Add value to the pointed variable by total.
void cumulate(int *total, int value) {
	*total = *total + value;
}

//Initialize to zero the variable pointed by p.
void init_to_zero(int *p) {
	*p = 0;
}

//Read n integers, return their sum. -1 on error.

int r_sum(int n) {
	int sum = 0;
	for (int i = 0;i < n; i++) {
	int value;
	if (r_int(" value :", &value) != 1) {
		printf(" Reading error. \n");
		return -1;
		}
	cumulate(&sum, value);
	}
	return sum;
}

int main(void) {
	int x = 0;

	if (r_int("Enter an integer : ", &x) != 1) {
		printf("Error.\n");
		return 1;
	}
	printf("You entered : %d\n", x);

	doubles(&x);
	printf("After doubling : %d\n", x);

	int total = 0;

	cumulate(&total, 10);
	cumulate(&total, 20);
	cumulate(&total, 30);
	printf("Total cumulated : %d\n", total);

	init_to_zero(&total);
	printf("After init_to_zero : %d\n", total);

	int n;
	if (r_int("How many values ? ", &n) != 1 || n <= 0) {
		printf("Invalid number. \n");
		return 1;
	}

	int sum = r_sum(n);
	if (sum < 0 ) {
		return 1;
	}
	printf("Sum of %d values :  %d\n", n, sum);

	return 0;
}
