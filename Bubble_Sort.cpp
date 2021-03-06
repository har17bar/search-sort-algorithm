#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

void Bubble_Sort( int *arr,int size, bool(*stugel)(int, int)) {
	
	int tmp;
	for (int ix = size-1; ix >= 1; --ix) {
		for (int iy = 0; iy < ix; ++iy) {
			if (stugel(arr[iy], arr[iy + 1])) {
				tmp = arr[iy];
				(arr[iy]) = arr[iy + 1];
				arr[iy + 1] = tmp;
			}
		}

	}

}
bool asc(int a, int b) {
	if (a < b) {
		return true;
	}
	return false;
}
bool desc(int a, int b) {
	if (a > b) {
		return true;
	}
	return false;
}



int main() {
	const int  length = 6;
	int arr[length] = { 1, 8, 5, 7, 3,2 };
	Bubble_Sort(arr,length, desc);
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
	
}



