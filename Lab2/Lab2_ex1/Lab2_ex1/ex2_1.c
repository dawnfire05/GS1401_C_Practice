#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b, c, d, largest, smallest;
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a <= b) {
		largest = b;
		smallest = a;
	}
	else {
		largest = a;
		smallest = b;
	}

	if (largest <= c) {
		largest = c;
	}
	else {
		if (c <= smallest) {
			smallest = c;
		}
	}

	if (largest <= d) {
		largest = d;
	}
	else {
		if (d <= smallest) {
			smallest = d;
		}
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);
	
	return 0;

}