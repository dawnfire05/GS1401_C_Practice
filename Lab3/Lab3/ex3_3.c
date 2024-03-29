#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, j;
	printf("Enter the maximum squre: ");
	scanf("%d", &n);

	for (j = 2; (j*j) <= n; j+=2) {
		printf("%d\n", j * j);
	}
}