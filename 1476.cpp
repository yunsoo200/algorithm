#include <iostream>
using namespace std;
int main() {
	int e, s, m; // e <= 15, s <= 28, m <= 19
	cin >> e >> s >> m;
	e--; s--; m--;
	// 0~14, 0~27, 0~18 ·Î ºÁ¾ß µÊ. °è»ê ÈÄ +1.
	int in_e = -1; int in_s = -1; int in_m = -1;
	int year = 0;
	while (in_e != e || in_s != s || in_m != m) {
		in_e++; in_s++; in_m++;
		in_e = in_e % 15;
		in_s = in_s % 28;
		in_m = in_m % 19;
		year++;
	}
	cout << year << endl;
}