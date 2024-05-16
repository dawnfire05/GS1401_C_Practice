#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_array(int arr[], int size);
void output_array(int arr[], int size);
int count_key(int arr[], int size, int key);

int main(){
	int arr[10], size = 10, key, count;
	input_array(arr, size);
	output_array(arr, size);

	printf("[count key]\n");
	printf("Enter a key value: ");
	scanf("%d", &key);
	count = count_key(arr, size, key);
	if (count ==-1){
		printf("Key not found\n");
	}
	else{
		printf("Key found %d times.\n", count);
	}
}


void input_array(int arr[], int size){
	int i;
	printf("[input]\n");
	printf("Input an array 1 of 10 integers: ");
	for(i = 0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");
}

void output_array(int arr[], int size){
	int i;
	printf("[output]\n");
	printf("array 1: ");
	for(i = 0; i<size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

int count_key(int arr[], int size ,int key){
	int times=0, i;
	for(i = 0; i<size; i++){
		if(arr[i]==key) times++;
	}
	if (times==0) return -1;
	return times;
}

