#include <iostream>
#include <cstdio>
#include <cstdlib>

#define SIZE 15

using namespace std;

bool print_sum_make_zero(int *arr, int &sum) {
	cout << "actual sum = " << sum << endl;
	
	sum = 0;
	
	for (int i = 0; i < SIZE; i++) {
		*(arr + i) = (i + 1);
	}
	
	return true;
}

int main()
{
	int *arr = (int *) malloc(SIZE * sizeof(int));
	
	for (int i = 0; i < SIZE; i++) {
		*(arr + i) = i * SIZE + SIZE / 2;
	}
	
	cout << "array: ";
	
	for (int i = 0; i < SIZE; i++) {
		cout << *(arr + i) << " ";
	}
	
	cout << endl;
	
	int sum = 0;
	
	for (int i = 0; i < SIZE; i++) {
		sum += *(arr + i);
	}
	
	bool op = print_sum_make_zero(arr, sum);
	
	cout << "sum = " << sum << endl;
	
	cout << "array: ";
	
	for (int i = 0; i < SIZE; i++) {
		cout << *(arr + i) << " ";
	}
	
	cout << endl;
	
	for (int i = 0; i < SIZE; i++) {
		sum += *(arr + i);
	}
	
	cout << "now sum = " << sum << endl;
	
	return 0;
}