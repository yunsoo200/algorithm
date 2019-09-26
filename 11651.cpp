#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
pair<int, int> list[100000];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		list[i].first = y;
		list[i].second = x;
	}
	sort(list, list + n);
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", list[i].second, list[i].first);
	}
}