#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;
pair<pair<int, int>, string> list[100000];
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		list[i] = make_pair(make_pair(age, i), name);
	}
	sort(list, list + n);
	for (int i = 0; i < n; i++) {
		cout << list[i].first.first << " " << list[i].second << "\n";
	}
}