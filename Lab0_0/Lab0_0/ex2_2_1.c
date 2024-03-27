#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int H, W, N;
    printf("Enter H,W and N : ");
    scanf("%d %d %d", &H, &W, &N);

    int floor, room;

    floor = (N - 1) % H + 1;
    room = (N-1)/H+1;
    
    printf("Student's room number : %d%02d\n", floor, room);

    return 0;
}