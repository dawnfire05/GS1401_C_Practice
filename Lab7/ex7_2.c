#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("Enter 10 integers: ");
	int i,j;
	int a[10], b[10];
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	printf("Array after removing duplicates: ");
	int index = 0, check, size = 10;
	for (i = 0; i < 10; i++) {
		check = 0;
		for (j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				check = 1;
				size--;
				break;
			}
		}
		if (check == 0) {
			b[index] = a[i];
			index++;
		}
	}
	for (i = 0; i < size; i++) {
		printf("%d ", b[i]);
	}
}