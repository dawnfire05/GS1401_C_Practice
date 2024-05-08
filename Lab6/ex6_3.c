#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rectangle(row, column);

int main() {
	int row, column;
	printf("Enter sides: ");
	scanf("%d %d", &row, &column);
	rectangle(row, column);
}

void rectangle(int row, int column) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < column; j++) {
			printf("*");
		}
		printf("\n");
	}
}