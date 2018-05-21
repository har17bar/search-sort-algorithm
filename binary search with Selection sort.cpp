#include "stdafx.h"
#include <iostream>

using namespace std;

int searchIndex(int arr[], int right, int search);
void SelectionSort(int arr[], int size);
void showArr(int arr[], int size);
int main() {
	int arraysize = 25;
	int *arr = new int[arraysize];
	cout << "Dont sorted" << "++____________________" << endl;
	cout << endl;
	for (int i = 0; i <= arraysize; i++) {
		if (i % 2 == 0)
			arr[i] = i - 2;
		else if (i % 3 == 0)
			arr[i] = i - 5;
		else if (i % 4 == 0) {
			arr[i] = i - 7;
		}
		else {
			arr[i] = i * 2;
		}
		cout << arr[i] << endl;

	}
	SelectionSort(arr, arraysize);
	cout << endl;
	cout << "Sorted" << "++____________________" << endl;
	cout << endl;
	showArr(arr, arraysize);
	cout << "Entered your number to fined index in array " << endl;
	int numbertofindindex;
	cin >> numbertofindindex;


	if (arr[arraysize - 1] >= numbertofindindex) {
		int index = searchIndex(arr, arraysize, numbertofindindex);
		if (index >= 0) {
			cout << "Number index is in array:" << index << endl;
		}
		else {
			cout << "Dont fined that number in array " << endl;
		}

	}
	else {
		cout << "Dont fined that number in array " << endl;
	}


	delete[] arr;

}

void SelectionSort(int arr[], int size) {
	int minStart;
	int curentMin;
	int tmp;
	int j;
	int index;
	for (int i = 0; i < size; i++) {
		minStart = arr[i];
		curentMin = minStart;
		for (j = i + 1; j < size; j++) {
			if (curentMin > arr[j]) {
				curentMin = arr[j];
				index = j;
			}
		}
		if (minStart != curentMin) {
			tmp = arr[i];
			arr[i] = arr[index];
			arr[index] = tmp;
		}
	}
}
void showArr(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "index is: " << i << "\t" << arr[i] << endl;
	}
}



int searchIndex(int arr[], int right, int search) {
	int centr = 1;
	int left = 0;
	while (left <= right) {
		centr = (left + right) / 2;
		if (search == arr[centr]) {
			return centr;

		}
		else if (search < arr[centr]) {
			right = centr - 1;
		}
		else {
			left = centr + 1;
		}


	}

	return -100;
}