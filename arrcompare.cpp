#include<stdlib.h>
#include<iostream>

using namespace std;

namespace X {
	int arrMaxMin(int *arr, int count, bool isMax) {
		int temp = arr[0];

		if (isMax) {
			for (int i = 1; i < count; i++) {
				if (temp < arr[i]) {
					temp = arr[i];
				}
			}
		}
		else {
			for (int i = 1; i < count; i++) {
				if (temp > arr[i]) {
					temp = arr[i];
				}
			}
		}

		return temp;
	}
}

int main(void) {
	bool isMax = true;
	int arr[4] = { 1, 2, 3, 4 };

	cout << "0»ò1" << endl;
	cin >> isMax;
	cout << X::arrMaxMin(arr, 4, isMax) << endl;

	system("pause");
	return 0;
}