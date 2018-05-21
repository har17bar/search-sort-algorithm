#include "stdafx.h"
#include <iostream>

using namespace std;

int searchIndex(int arr[], int right, int search);

int main() {
	unsigned int arraysize = 1000000;
	int *arr = new int[arraysize];

	for (int i = 0; i <= arraysize; i++) {
		arr[i] = i;
	}
	cout << "Entered your number to fined index in array " << endl;
	int numbertofindindex;
	cin >> numbertofindindex;


	if (arr[arraysize - 1] >= numbertofindindex) {
		int index = searchIndex(arr, arraysize, numbertofindindex);
		if (index >= 0) {
			cout << "number index is in array:" << index << endl;
		}
		else {
			cout << "Dont fined that number in array " << endl;
		}

	}
	else {
		cout << "Dont fined that number in array " << endl;
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
