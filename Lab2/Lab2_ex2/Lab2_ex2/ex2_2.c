#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int H, W, N, RoomHeight, RoomWidth, RoomNumber;
	printf("Enter H, W and N: ");
	scanf("%d %d %d", &H, &W, &N);
	RoomHeight = N % H;
	RoomWidth = N / H + 1;
	RoomNumber = RoomHeight * 100 + RoomWidth;

	printf("\nN : %d-------> Student's room number: %d\n", N, RoomNumber);

	return 0;

}