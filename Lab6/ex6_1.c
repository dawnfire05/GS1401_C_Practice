#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float calculateCharges(int);

int main() {
	int car1h, car2h, car3h;
	float total = 0.00;
	float car1m, car2m, car3m;
	printf("Enter the hours rented for 3 cars: ");
	scanf("%d %d %d", &car1h, &car2h, &car3h);

	car1m = calculateCharges(car1h);
	car2m = calculateCharges(car2h);
	car3m = calculateCharges(car3h);
	total = car1m + car2m + car3m;
	
	printf("%5s %10s %8s\n", "Car", "Hours", "Charge");
	printf("%5d %10d %8.2f\n", 1, car1h, car1m);
	printf("%5d %10d %8.2f\n", 2, car2h, car2m);
	printf("%5d %10d %8.2f\n", 3, car3h, car3m);
}


float calculateCharges(int carnh) {
	float sumDays = 0.0, sumHours = 0.0, sumTax = 0.0;

	sumDays = (carnh / 24) * 50;

	if (carnh % 24 != 0) {
		if (carnh / 24 >= 1) {
			sumHours = carnh % 24 * 5;
		}
		else {
			sumHours = (carnh % 24 > 8.0) ? 25 + (carnh % 24 - 8) * 5 : 25;
		}
	}
	sumTax = (float)carnh * 0.5; //8시간 미만이면 세금 x
	printf("sumDays: %f sumHours: %f sumTax: %f\n", sumDays, sumHours, sumTax);
	return sumDays + sumHours + sumTax;
}
