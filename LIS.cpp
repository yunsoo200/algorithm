#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	srand((unsigned int)time(NULL));
	int arr[11];
	for (int i = 1; i <= 10; i++) {
		arr[i] = rand() % 100;
	}

	for (int i = 1; i <= 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int lis1[11] = { 0, };

	//O(N^2)
	int max1 = 0;
	for (int i = 1; i <= 10; i++) {
		if (lis1[i] == 0) lis1[i] = 1;
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (lis1[i] < lis1[j]) lis1[i] = lis1[j] + 1;
			}
		}
		if (max1 < lis1[i]) max1 = lis1[i];
	}
	cout << max1 << endl;

	//O(NlogN) (lower_bound°¡ ÀÌºÐÅ½»ö)
	int max2 = 0;
	vector<int> lis2;
	lis2.push_back(-1);
	for (int i = 1; i <= 10; i++) {
		if (arr[i] > lis2.back())
			lis2.push_back(arr[i]);
		else {

		}
	}
}