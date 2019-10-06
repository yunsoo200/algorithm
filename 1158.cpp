#include <iostream>
#include <vector>
#include <stdio.h>
//다시 풀어보기
using namespace std;

class circleList;

class Node {
public:
	int data;
	Node* next;

	Node() { data = 0; next = 0; }
	Node(int data) { this->data = data; next = 0; }

	friend circleList;
};

class circleList {
public:
	Node* head;
	Node* cursor;

	circleList() { head = 0; cursor = 0; }

	void insert(Node* tmp) {
		if (head == 0) {
			head = tmp;
			tmp->next = head;
			cursor = head;
			return;
		}

		cursor->next = tmp;
		tmp->next = head;
		cursor = tmp;
	}

	void moveCursor() {
		cursor = head;
	}

	int pop(int index) {
		Node* now = new Node();

		while (index != 1) {
			now = cursor;
			cursor = cursor->next;
			index--;
		}
		if (index != 1)
			now->next = cursor->next;
		Node* tmp = cursor;

		int result = tmp->data;
		if (tmp == head)
			head = head->next;
		cursor = cursor->next;
		delete(tmp);
		return result;
	}
};

int main() {
	int n, m;
	cin >> n >> m;

	circleList c;

	for (int i = 1; i <= n; i++) {
		c.insert(new Node(i));
	}

	c.moveCursor();

	cout << "<";
	for (int i = 1; i <= n; i++) {
		cout << c.pop(m);
		if (i != n)
			cout << ", ";

	}
	cout << ">" << endl;
	return 0;
}