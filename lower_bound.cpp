#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//�̺�Ž��.

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
		//lower_bound�� ���ĵ� ���Ϳ��� q�� ��ġ�� �ּҸ� return��.
		//����, ������ �����ּҷ� ���������� �� �� 1�� ���ϸ�
		//�ε����� ��Ÿ��.
	}
}