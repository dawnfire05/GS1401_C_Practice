#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int base, exponent;
	printf("Enter integer base and exponent: ");
	scanf("%d %d", &base, &exponent);
	printf("%d to the power %d is : %d\n", base, exponent, integerPower(base, exponent));
}

int integerPower(int base, int exponent) {
	int result = 1;

	for (int i = 0; i < exponent; i++) {
		result *= base;
	}
	return result;
}