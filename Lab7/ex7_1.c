#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, temp, start, end;
	int a[10], b[10];

	printf("Please enter 10 numbers: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &temp);
		a[i] = temp;
	}
	
	printf("Enter the starting and eding point(1-10): ");
	scanf("%d %d", &start, &end);
	int counter = start;
	for (i = 0; i < 10; i++) {
		if (counter <= end) {
			b[i] = a[counter - 1];
		}
		else {
			b[i] = 0;
		}
		counter++;
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
	}
}