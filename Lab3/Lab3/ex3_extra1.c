#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int a =0, b=0, c=0, d = 0;
	int price = 0;
	printf("Enter the number of donuts: ");
	scanf("%d", &n);

	while (n >= 40) {
		n = n - 40;
		price += 16000;
		a++;
		}

	while (n <= 40 && n >= 20) {
		n = n - 20;
		price += 8500;
		b++;
	}
	while (n >= 10) {
		n = n - 10;
		price += 4500;
		c++;
	}
	while(n >= 1) {
		n = n - 1;
		price += 500;
		d++;
	}
	printf("%dlarge box, %dmedium box, %dsmall box, %dindividual box\n", a, b, c, d);
	printf("Total price = %d KRW\n", price);
}

