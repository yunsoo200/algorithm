#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//premutation(순열) 이용시 정렬해야 하는 이유는?

int main() {
	int n; cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	int result = -10000;
	//int j = 1;
	do {
		//cout << j++ << "'s phase" << endl;
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			int tmp = arr[i] - arr[i + 1];
			if (tmp < 0)
				sum -= tmp;
			else sum += tmp;
		}
		if (result < sum) {
			//cout << sum << endl;
			result = sum;
		}
	} while (next_permutation(arr.begin(), arr.end()));
	cout << result << endl;
}