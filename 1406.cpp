#include <iostream>
#include <vector>
#include <string>
//다시 풀어보기

using namespace std;

int main() {
	string s;
	cin >> s;

	vector<char>front;
	vector<char>back;

	for (int i = 0; i < s.size(); i++) {
		front.push_back(s[i]);
	}

	int n;
	cin >> n;
	while (n--) {
		char key;
		cin >> key;
		if (key == 'L') {
			if (!front.empty()) {
				back.push_back(front.back());
				front.pop_back();
			}
		}
		else if (key == 'D') {
			if (!back.empty()) {
				front.push_back(back.back());
				back.pop_back();
			}
		}
		else if (key == 'B') {
			if (!front.empty())
				front.pop_back();
		}
		else {
			char c;
			cin >> c;
			front.push_back(c);
		}
	}

	while (!front.empty()) {
		back.push_back(front.back());
		front.pop_back();
	}

	while (!back.empty()) {
		cout << back.back();
		back.pop_back();
	}

	return 0;
}