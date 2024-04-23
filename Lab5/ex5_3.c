#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    printf("gcd = %d\n", gcd_r(a, b));
}

int gcd_r(int M, int N) {
        
    if (N == 0) {
        return M;
    }
    return gcd_r(N, M % N);
}