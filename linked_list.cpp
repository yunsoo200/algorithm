#include <iostream>
using namespace std;
class Node {
public:
	int data = 0;
	Node* next = NULL;
};

class List {
public:
	Node* head = NULL; // NULL로 초기화해야 됨.
	int ssize = 0; // 0으로 초기화해야 됨.
	void print() {
		Node* tmp = head;
		while (tmp != NULL) {
			cout << tmp->data << " ";
			tmp = tmp->next;
		}
	}
	void insert(int data) {
		if (ssize == 0) {
			head = new Node();
			head->data = data;
		} // list가 비어있을 때.
		else {
			Node* before;
			Node* tmp = head;
			while (tmp != NULL) {
				before = tmp;
				tmp = tmp->next;
			}
			tmp = new Node();
			tmp->data = data;
			before->next = tmp;
		} // list가 비어있지 않을 때.
		ssize++;
	}
	bool empty() {
		if (ssize) return false;
		else return true;
	}
	int size() {
		return ssize;
	}
	Node* find(int data) {
		Node* tmp = head;
		while (tmp != NULL) {
			if (tmp->data == data) {
				return tmp;
			}
			tmp = tmp->next;
		}
		return NULL;
	}
};
int main() {
	List l;
	for (int i = 1; i <= 10; i++) {
		l.insert(i);
	}
	l.print();
	cout << endl;
	cout << l.find(5)->data << endl;
}