#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 5
#define COLUMN 5

void input_array(int arr[][COLUMN], int row);
int row_total(int arr[][COLUMN], int row);
int column_total(int arr[][COLUMN], int column);

int main(){
	int arr[ROW][COLUMN], row, column;
	for(row = 0; row<ROW; row++){
		input_array(arr, row);
	}
	
	char row_totals[20] = "Row totals    : ";
	printf("%s", row_totals);
	for(row = 0; row<ROW; row++){
		printf("%d ", row_total(arr, row));
	}
	printf("\n");
	
	char column_totals[20] = "Column totals : ";
	printf("%s", column_totals);
	for(column = 0; column<COLUMN; column++){
		printf("%d ", column_total(arr, column));
	}
	printf("\n");
	
}

void input_array(int arr[][COLUMN], int row){
	int i;
	printf("Enter row %d: ", row+1);
	for(i = 0; i<COLUMN; i++){
		scanf("%d", &arr[row][i]);
	}
}

int row_total(int arr[][COLUMN], int row){
	int i, row_sum=0;
	for(i = 0; i<COLUMN; i++){
		row_sum+=arr[row][i];
	}
	return row_sum;
}

int column_total(int arr[][COLUMN], int column){
	int i, column_sum=0;
	for(i = 0; i<ROW; i++){
		column_sum+=arr[i][column];
	}
	return column_sum;
}
