#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Separate odd and even integers in separate arrays: ");
	printf("\n-----------------------------------------------------");

	int c;
	printf("\nInput the number of elements to be stored int the array : ");
	scanf("%d", &c);

	int i;
	int* a;
	int* even;
	int* odd;
	a = (int*)malloc(sizeof(int) * c);
	even = (int*)malloc(sizeof(int) * c);
	odd = (int*)malloc(sizeof(int) * c);
	
	for (i = 0; i < c; i++) {
		printf("element - %d: ", i);
		scanf("%d", &a[i]);
	}

	
	int evenc = 0;
	int oddc = 0;
	for (i = 0; i < c; i++) {
		if (a[i] % 2 ==0) {
			even[evenc] = a[i];
			evenc++;
		}
		else {
			odd[oddc] = a[i];
			oddc++;
		}
	}
	printf("\nThe Even elements are : \n");
	for (i = 0; i < evenc; i++) {
		printf("%d ", even[i]);
	}
	printf("\nThe Odd elements are : \n");
	for (i = 0; i < oddc; i++) {
		printf("%d ", odd[i]);
	}
}