#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, M, N;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	printf("Greatest common divisor: %d\n", euclid_gcd(a, b));
	
}

int euclid_gcd(int a, int b) {
	int M, N, R;
	if (a < b) {
		M = b; N = a;
	}
	else {
		M = a; N = b;
	}
	while (1) {
		R = M % N;
		M = N; N = R;
		if (N != 0) {
			continue;
		}
		else {
			return M;
		}
	}


}