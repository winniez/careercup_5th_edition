#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

typedef struct node{
  node *left;
	node *right;
} binaryTreeNode;

bool isBalanced(binaryTreeNode *root, int &depth){
	if (root == NULL){
		depth = 0;
		return true;
	}

	int ldepth, rdepth;
	bool balance;
	balance = isBalanced(root->left, ldepth) && isBalanced(root->right, rdepth);
	depth = max(ldepth, rdepth)+1;
	if (balance && abs(ldepth-rdepth)<=1)
		return true;
	else
		return false;
}

int main(){
	int depth;
	binaryTreeNode tree[4];

	tree[0].left = &tree[1];
	tree[0].right = &tree[2];
	tree[1].left = &tree[3];
	tree[1].right = NULL;
	tree[2].left = NULL;
	tree[2].right = NULL;
	
	bool result = isBalanced(&tree[0], depth);
	if (result)
		cout<<"This is a balanced tree"<<endl;
	else
		cout<<"This is not a balanced tree"<<endl;

	return 0;
}
