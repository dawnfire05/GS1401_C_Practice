#include <stdio.h>

int main() {
	int a, b, c, d, e, f;

	//1
	a = 3; b = c = 0; d = e = f = 1;
	a = (a++, a);
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 1, a, b, c, d, e, f);


	// 2
	a = 3; b = c = 0; d = e = f = 1;
	b = a--, c=a++, d= ++ a;
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 2, a, b, c, d, e, f);

	// 3
	a = b = c = 0; d = e = f = 1;
	b = --d + a++ ? a-- : a++, e--;
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 3, a, b, c, d, e, f);

	// 4
	a = b = c = 0; d = e = f = 1;
	a++&& f ++ / a;
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 4, a, b, c, d, e, f);

	// 5
	a = b = c = 0; d = e = f = 1;
	f += c + b + -e || (a + ++d);
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 5, a, b, c, d, e, f);

	// 6
	a = 0; b = c = 0; d = e = f = 1;
	f += a = d > b * c + !e + d - a;
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 6, a, b, c, d, e, f);

	// 7
	a = 3; b = c = 0; d = e = f = 1;
	++a && (a /= ++f + (d -= ++b));
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 7, a, b, c, d, e, f);

	// 8
	a = 3; b = c = 0; d = e = f = 1;
	for (; --a; d += e++);
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 8, a, b, c, d, e, f);

	// 9
	a = 4; b = c = 0; d = e = 1; f = 2;
	do { --e ? e / c : --f; } while (e++, a--, --a);
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 9, a, b, c, d, e, f);

	// 10
	a = 0; b = c = 0; d = e = f = 1;
	a += b += c + d;
	fprintf(stdout, "%2d: %2d %2d %2d %2d %2d %2d\n", 10, a, b, c, d, e, f);
}