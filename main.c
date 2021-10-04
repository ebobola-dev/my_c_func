#include <stdio.h>

#define ARR_SIZE 8

int max(int *arr, int size);
int min(int *arr, int size);
int sum(int *arr, int size);
int mult(int *arr, int size);
int count(int *arr, int size, int x);
int find_pos(int *arr, int size, int x);


int main() {
	int my_arr[ARR_SIZE];
	int arr_size, number;

	printf("Enter %d numbers: ", ARR_SIZE);
	for (int i = 0; i < ARR_SIZE; scanf("%d", &my_arr[i++]));
	arr_size = sizeof(my_arr) / sizeof(my_arr[0]);
	printf("max of arr = %d\n", max(my_arr, arr_size));
	printf("min of arr = %d\n", min(my_arr, arr_size));
	printf("sum of arr = %d\n", sum(my_arr, arr_size));
	printf("mult of arr = %d\n", mult(my_arr, arr_size));
	printf("Etner require number: ");
	scanf("%d", &number);
	printf("pos of %d = %d\n", number, find_pos(my_arr, arr_size, number));
	printf("count of %d = %d\n", number, count(my_arr, arr_size, number));

	return 0;
}

int max(int *arr, int size){
	int max = arr[0];
	for (int i = 0; i < size; i++) if (arr[i] > max) max = arr[i];
	return max;
}

int min(int *arr, int size){
	int min = arr[0];
	for (int i = 0; i < size; i++) if (arr[i] < min) min = arr[i];
	return min;
}

int sum(int *arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; sum += arr[i++]);
	return sum;
}

int mult(int *arr, int size) {
	int mult = 1;
	for (int i = 0; i < size; mult *= arr[i++]);
	return mult;
}

int count(int *arr, int size, int x){
	int quantity = 0;
	for (int i = 0; i < size; i++) if (arr[i] == x) quantity++;
	return quantity;
}

int find_pos(int *arr, int size, int x) {
	int pos = -1;
	for (int i = 0; i < size; i++) if (arr[i] == x) pos = i;
	return pos;
}

