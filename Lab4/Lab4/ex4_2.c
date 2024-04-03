#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("When specific key 999 is input, the program is terminated.\n");
	do {
		printf("Enter the desired multiplication table (from 1 to 20): ");
		scanf("%d", &n);
	} while (!((n <= 20 & n >= 1) || n == 999));

	if (n == 999) exit(0);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%2d*%2d=%3d", i, j, i * j);
		}
	}
	

}