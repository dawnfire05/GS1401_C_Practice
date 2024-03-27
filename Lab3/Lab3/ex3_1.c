#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int i = 2;
	printf("n = ");
	scanf("%d", &n);
	printf("\n→ All prime factors are ");

	while (n / i != 1) {
		if (n % i != 0) {
			i++;
		}
		else if(n % i ==0){
			printf("%d, ", i);
			n = n / i;
		}
	}
	printf("%d", n);
}