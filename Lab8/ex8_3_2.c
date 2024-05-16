#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_array(int arr[], int size);
void output_array(int arr[], int size);
int array_equal(int a[], int b[], int size);

int main(){
	int arr1[5], arr2[5], is_equal;
	printf("[input]\n");
	printf("Input an array 1 of 5 integers: ");
	input_array(arr1, 5);
	printf("Input an array 2 of 5 integers: ");
	input_array(arr2, 5);
	printf("\n\n");

	printf("[output]\n");
	printf("array 1: ");
	output_array(arr1, 5);
	printf("array 2: ");
	output_array(arr2, 5);
	printf("\n");	

	is_equal = array_equal(arr1, arr2, 5);
	printf("[compare]\n");
	if(is_equal==0) printf("The two arrays are different\n");
	else if (is_equal==1) printf("Two arrays are equal\n");
}

void input_array(int arr[], int size){
	int i;
	for(i = 0; i<size; i++){
		scanf("%d", &arr[i]);
	}
}

void output_array(int arr[], int size){
	int i;
	for(i = 0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int array_equal(int a[], int b[], int size){
	int i;
	for(i = 0; i<size; i++){
		if(a[i]==b[i]) continue;
		else return 0;
	}
	return 1;
}
