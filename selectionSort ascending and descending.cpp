#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
using std::vector;

void sortingArray(vector<int> &list, bool(*stugel)(int, int));
bool descending(int a, int b);
bool ascending(int a, int b);
void change(int *a, int *b);
void show(vector<int> &list);




int main(){

	vector<int> list{ 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };
	sortingArray(list, ascending);
	cout << "ascending________________" << endl;
	show(list);
	sortingArray(list, descending);
	cout << "descending________________" << endl;
	show(list);

}




void sortingArray(vector<int> &list, bool(*stugel)(int, int)) {
	int size = list.size();
	for (int i = 0; i < size - 1; i++) {
		int compareIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (stugel(list[compareIndex], list[j])) {
				compareIndex = j;
			}
			if (compareIndex != i) {
				change(&list[i], &list[compareIndex]);
			}
		}
	}


}

bool ascending(int a, int b) {
	if (a > b) {
		return true;
	}
	return false;
}

bool descending(int a, int b) {
	if (a < b) {
		return true;
	}
	return false;
}

void change(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void show(vector<int> &list) {
	int size = list.size();
	for (int i = 0; i < size; i++) {
		cout << list[i] << endl;
	}
}
