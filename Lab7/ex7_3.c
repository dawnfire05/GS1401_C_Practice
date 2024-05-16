#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[10];
	int i, min, max;

	for (i = 0; i < 10; i++) {
		printf("Enter element %02d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	min = a[0];
	max = a[0];

	for (i = 0; i < 10; i++) {
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("Maximum element is : %d\nMinimum element is %d\n", max, min);

}