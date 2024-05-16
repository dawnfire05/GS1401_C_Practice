#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int arr[], int n);
double average(int arr[], int n);
void copy(int arr[], int new_arr[], int n);

int main(){
	int arr[10], new_arr[10], i, max_value, n=10;
	double avg_value;
	
	printf("Enter 10 integers: ");
	for(i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}

	printf("maximum value: %d\n", max(arr, n));
	printf("average: %f\n", average(arr, n));
	copy(arr, new_arr, n);
	printf("copied array: \n");

	for(i = 0; i<10; i++){
		printf("%d ", new_arr[i]);
	}
	printf("\n");

}

int max(int arr[], int n){
	int i, max = arr[0];
	for(i = 1; i<n; i++){
		if (arr[i]>max) max = arr[i];
	}
	return max;
}

double average(int arr[], int n){
	int i, sum=0;
	double average;
	for(i = 0; i<n; i++){
		sum+=arr[i];
	}
	average = sum/n;
	return average;
}

void copy(int arr[], int new_arr[], int n){
	int i;
	for(i=0; i<n; i++){
		new_arr[i]=arr[i];
	}
}

