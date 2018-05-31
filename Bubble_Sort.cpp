#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

void Bubble_Sort( int *arr,int size) {
	
	int tmp;
	for (int ix = size-1; ix >= 1; --ix) {
		for (int iy = 0; iy < ix; ++iy) {
			if (arr[iy] > arr[iy + 1]) {
				tmp = arr[iy];
				(arr[iy]) = arr[iy + 1];
				arr[iy + 1] = tmp;
			}
		}

	}

}


int main() {
	const int  length = 6;
	int arr[length] = { 1, 8, 5, 7, 3,2 };
	Bubble_Sort(arr,length);
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
	
}



