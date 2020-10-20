#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
	Node (int val)  {
		data = val;
		left = NULL;
		right = NULL;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	struct Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->right = new Node(6);
	return 0;
}
