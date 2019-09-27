#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
	int data = 0;
	int depth = 0;
	vector<Node*> child_list;
};
class Tree {
public:
	Node* root = NULL;
	vector<Node*> node_list;
	Tree(int root_no) {
		root = new Node();
		root->data = root_no;
		node_list.push_back(root);
	}
	void insert(int parent, int child) {
		Node* child_node = new Node();
		Node* parent_node = find(parent);
		if (parent_node == NULL) return;
		
		child_node->data = child;
		child_node->depth = parent_node->depth + 1;
		parent_node->child_list.push_back(child_node);
		node_list.push_back(child_node);
	}
	Node* find(int data) {
		for (int i = 0; i < node_list.size(); i++) {
			if (node_list[i]->data == data)
				return node_list[i];
		}
		return NULL;
	}
	void bfs(Node* tmp) {
		cout << tmp->data << endl;
		for (int i = 0; i < tmp->child_list.size(); i++) {
			bfs(tmp->child_list[i]);
		}
	}
};
int main() {
	Tree t = Tree(1);
	int n; cin >> n;
	for (int i = 1; i < n; i++) {
		int parent, data;
		cin >> parent >> data;
		t.insert(parent, data);
	}
	t.bfs(t.root);
}