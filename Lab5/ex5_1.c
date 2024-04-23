#include <stdio.h>
#include <math.h>

int main() {
	double iteration = -10;
	double acc = 0.000001;
	double x_old = iteration;
	double x_new;
	int counter = 0;

	while (1) {
		x_new = x_old - (exp(-x_old) - x_old) / (-exp(-x_old) - 1);
		printf("iteration : %3d => x_old : %3.10f      x_new : %3.10f\n", counter, x_old, x_new);
		if (x_new - x_old < acc) break;
		counter++;
		x_old = x_new;
	};
	printf("The root of the function exp(-x)-x at accuracy 0.000001 is %.6f", x_new);
	printf("\nThe number of iterations is %d", counter);
}