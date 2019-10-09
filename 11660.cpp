#include <iostream>
#include <stdio.h>
using namespace std;
int sum[1025][1025];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int tmp;
			cin >> tmp;
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + tmp;
		}
	}
	while (m--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		unsigned int result = 0;
		result = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
		printf("%d\n", result);
	}
}