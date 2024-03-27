#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N, H, W;

    printf("Enter H,W and N : ");
    scanf("%d %d %d", &H, &W, &N);

    int floor = (N - 1) % H;
    int room = (N - 1) / H + 1;

    printf("Student's room number : %d0%d\n", floor, room);

    return 0;
}