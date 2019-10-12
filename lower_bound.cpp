#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//이분탐색.

int main() {
	int n, m; cin >> n >> m;
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}

	while (m--) {
		int q; cin >> q;
		cout << lower_bound(v.begin(), v.end(), q) - v.begin() + 1 << endl;
		//lower_bound는 정렬된 벡터에서 q가 위치할 주소를 return함.
		//따라서, 벡터의 시작주소로 뺄셈연산을 한 후 1을 더하면
		//인덱스를 나타냄.
	}
}