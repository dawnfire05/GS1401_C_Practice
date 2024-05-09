#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[10];
	int i, pos = 0, neg = 0, zero = 0;

	printf("Enter 10 integers: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 10; i++) {
		if (a[i] < 0) neg++;
		else if (a[i] > 0) pos++;
		else if (a[i] == 0)zero++;
	}

	printf("positive=%d, negative=%d, 0=%d", pos, neg, zero);
}