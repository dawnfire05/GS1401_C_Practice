#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MulDigits(int);

int main() {
	int n;
	printf("Enter the integer between 100 and 999 : ");
	scanf("%d", &n);

	printf("The multiplication of all digits in %d is %d\n", n, MulDigits(n));
}

int MulDigits(int n) {
	int a, b, c;

	a = n / 100;
	b = (n % 100) / 10;
	c = n % 10;
	return a * b * c;
}