#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, count = 0, l;
	int i, j, k;
	printf("When specific key 999 is input, the program is terminated.\n");
	do {
		printf("Enter the desired multiplication table (from 1 to 20): ");
		scanf("%d", &n);
	} while (!((n <= 20 & n >= 1) || n == 999));

	if (n == 999) exit(0);
	l = n;

	for (i = 1; i <= n / 3 + 1; i++) {
		for (j = 1; j <= 9; j++) {
			for (k = 1; k<=(l / 3 > 0 ? 3 : l % 3); k++) {
				printf("%d*%d=%3d         ", k+count, j, (k+count)*j);
			}
			printf("\n");
		}
		printf("\n");
		count += 3;
		l -= 3;
	}
	

}