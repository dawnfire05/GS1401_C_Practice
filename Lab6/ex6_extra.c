#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[10];
	int sum = 0;
	int i, j;
	for (i = 0; i < 10; i++) {
		printf("array[%d]: ", i);
		scanf("%d", &a[i]);
	}
	for (j = 0; j < 10; j++) {
		sum += a[j];
	}

	printf("Sum of the array: %d", sum);

}