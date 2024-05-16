#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_array(int arr[], int size);
void reverse_array(int arr[], int n);
void output_array(int arr[], int size);
int i;

int main(){
	int arr[10], size=10, n=size/2;
	input_array(arr, size);
	reverse_array(arr, n);
	output_array(arr, size);
}


void input_array(int arr[], int size){
	printf("Input an array of 10 integers: ");
	for(i = 0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n\n");
}

void reverse_array(int arr[], int n){
	int temp;
	for(i = 0; i<n; i++){
		temp = arr[i];
		arr[i]=arr[9-i];
		arr[9-i]=temp;
	}
}

void output_array(int arr[], int size){
	printf("Reversed array: ");
	for(i = 0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
