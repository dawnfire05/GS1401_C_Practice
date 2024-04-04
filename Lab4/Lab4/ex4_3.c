#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int biggest(int, int, int, int);

int main() {
	int x, y, z, l;
	printf("Enter four integers : ");
	scanf("%d %d %d %d", &x, &y, &z, &l);
	printf("\nBiggest : %d", biggest(x, y, z, l));
}

int biggest(int a, int b, int c, int d) {
	int max, max1, max2;
	if (a >= b) max1 = a;
		else max1 = b;

	if (c >= d) max2 = c;
	else max2 = d;

	if (max1 >= max2) max = max1;
	else max = max2;
}