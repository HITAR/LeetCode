/*Title:
	Lowest Common Ancestor of a Binary Search Tree
*/



#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val<root->val && q->val<root->val)
        	return lowestCommonAncestor(root->left,p,q);
        if(p->val>root->val && q->val>root->val)
        	return lowestCommonAncestor(root->right,p,q);
        return root; 
    }

    void insertNode(TreeNode *root)
    {
    	
    }


};



int main()
{
	Solution tree;
	struct TreeNode* t;
	t = (struct TreeNode*)malloc(sizeof(TreeNode));
	t->val = 2;
	t->left= (struct TreeNode*)malloc(sizeof(TreeNode));
	t->right = (struct TreeNode*)malloc(sizeof(TreeNode));
	t->left->val =1;
	t->right->val = 2;
	struct TreeNode* ans = tree.lowestCommonAncestor(t,t->left,t->right);
	cout<<ans->val;

}