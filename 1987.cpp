#include <iostream>
using namespace std;
//백트래킹 문제!

int arr[22][22] = { 0, };

int find(int i, int j, bool* visit) {
	if (arr[i][j] == 0)
		return 0;
	if (visit[arr[i][j]] != 0)
		return 0;

	int length = 1;
	visit[arr[i][j]] = 1;
	int comp = 0; int tmp;

	tmp = find(i + 1, j, visit);
	if (comp < tmp) comp = tmp;
	tmp = find(i - 1, j, visit);
	if (comp < tmp) comp = tmp;
	tmp = find(i, j + 1, visit);
	if (comp < tmp) comp = tmp;
	tmp = find(i, j - 1, visit);
	if (comp < tmp) comp = tmp;

	visit[arr[i][j]] = false;
	return length + comp;
}
int main() {
	int r, c;
	char character;
	cin >> r >> c;
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) { 
			cin >> character;
			int tmp = (int)character - 64;
			arr[i][j] = tmp;
		}
	}
	bool visit[27] = { 0 };
	cout << find(1, 1, visit) << endl;
}