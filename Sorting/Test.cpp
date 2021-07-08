#include <bits/stdc++.h>
#include "Sort.h"
using namespace std;

int main() {
	int arr[10] = { 4,7,2,5,6,9,10,1,3,8 };
	int arrLength = sizeof(arr) / sizeof(arr[0]);
	//bubbleSort(arr, 0, arrLength - 1);
	for (int i = 0; i < arrLength; i++) {
		cout << arr[i] << "\t";
	}
}