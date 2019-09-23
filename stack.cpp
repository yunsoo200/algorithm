#include <iostream>
using namespace std;

class Node {
public:
	int data = 0;
	Node* next = NULL;
};

class Stack {
public:
	Node* head = NULL;
	int ssize = 0;
	int top() {
		if (head == NULL) return -1;
		return head->data;
	}
	void push(int data) {
		Node* tmp = new Node();
		tmp->data = data;
		tmp->next = head;
		head = tmp;
		ssize++;
	}
	void pop() {
		if (head == NULL) return;
		head = head->next;
		ssize--;
	}
	bool empty() {
		if (ssize == 0) return true;
		else return false;
	}
	int size() {
		return ssize;
	}
};

int main() {
	Stack s;
	for (int i = 1; i <= 10; i++) {
		s.push(i);
	}
	cout << "size : " << s.size() << endl;
	for (int i = 1; i <= 10; i++) {
		s.pop();
	}
	if (s.empty())
		cout << "empty!" << endl;
}