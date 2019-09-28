#include <iostream>
#include <vector>
using namespace std;
vector<int> tree[100001];
int parent[100001];
void search(int data) {
	for (int i = 0; i < tree[data].size(); i++) {
		int child = tree[data][i];
		if (parent[child] == 0) {
			parent[child] = data;
			search(child);
		}
	}
}
int main() {
	int n; cin >> n;
	for (int i = 1; i < n; i++) {
		int data1, data2;
		cin >> data1 >> data2;
		tree[data1].push_back(data2);
		tree[data2].push_back(data1);
	}
	parent[1] = 1;
	search(1);
	for (int i = 2; i <= n; i++) {
		cout << i << "'s parent : " << parent[i] << "\n";
	}
}