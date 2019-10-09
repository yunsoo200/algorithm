#include <iostream>
using namespace std;
//LIS¹®Á¦.

int dp[201];
int main() {
	int n;
	cin >> n;
	int arr[201];
	for (int i = 1; i <= n; i++) {
		int tmp; cin >> tmp;
		arr[i] = tmp;
	}
	int max = 0;
	for (int i = 1; i <= n; i++) {
		if (dp[i] == 0) dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				int length = dp[j] + 1;
				if (length > dp[i]) dp[i] = length;
			}
		}
		if (max < dp[i]) max = dp[i];
	} //O(N^2).
	cout << n - max << endl;
}