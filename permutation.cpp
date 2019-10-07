#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	vector<int> v;
	int tmp = 6;
	while (tmp--) {
		v.push_back(rand() % 20);
	}
	//sort(v.begin(), v.end());
	int phase = 1;
	do {
		cout << phase++ << "' phase" << endl;
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	} while (next_permutation(v.begin(), v.end()));
}