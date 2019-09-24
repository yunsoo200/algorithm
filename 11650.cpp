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
		list[i].first = x;
		list[i].second = y;
	}
	sort(list, list + n);
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", list[i].first, list[i].second);
	}
}