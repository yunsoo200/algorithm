#include <iostream>
#include <vector>
#include <string>
#include <math.h>
//다시 풀어보기

using namespace std;

int main() {
	vector<int> v2;
	vector<int> v8;

	string s2;

	cin >> s2;

	for (int i = 0; i < s2.size(); i++)
		v2.push_back(s2[i] - 48);

	for (int i = 0; i < s2.size(); i += 3) {
		if (v2.size() >= 3) {
			int tmp = 0;
			tmp += v2.back()*(int)pow(2, 0);
			v2.pop_back();
			tmp += v2.back()*(int)pow(2, 1);
			v2.pop_back();
			tmp += v2.back()*(int)pow(2, 2);
			v2.pop_back();
			v8.push_back(tmp);
		}
		else if (v2.size() == 2) {
			int tmp = 0;
			tmp += v2.back()*(int)pow(2, 0);
			v2.pop_back();
			tmp += v2.back()*(int)pow(2, 1);
			v2.pop_back();
			v8.push_back(tmp);
		}
		else if (v2.size() == 1) {
			int tmp = 0;
			tmp += v2.back()*(int)pow(2, 0);
			v2.pop_back();
			v8.push_back(tmp);
		}
	}

	while (!v8.empty()) {
		cout << v8.back();
		v8.pop_back();
	}
}