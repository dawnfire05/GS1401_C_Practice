#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 0,  i= 0;
	printf("Enter an odd size for the diamond size ( 1-19 ): ");
	scanf("%d", &N);
	for (i = 1; i <= (N-1)/2+1; i++) {
		for (int j = 1; j <= (N+1)/2 - i ; j++) {
			printf(" ");
		}
		for (int k = 1; k <= (2*i - 1); k ++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= (N - 1) / 2; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= N-2*i; k++) {
			printf("*");
		}
		printf("\n");
	}
}