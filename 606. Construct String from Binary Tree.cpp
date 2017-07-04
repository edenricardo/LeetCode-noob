/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    string construct(TreeNode* t){
        string s;
        s = "(" + to_string(t->val);
        if ((t->left==NULL) && (t->right==NULL))
            s += (")");
        else if ((t->left!=NULL) && (t->right==NULL))
            s += (construct(t->left)+")");
        else if ((t->left==NULL) && (t->right!=NULL)){
            s += "()";
            s += (construct(t->right)+")");
        }
        else
            s += (construct(t->left)+construct(t->right)+")");
        return s;
    }
    string tree2str(TreeNode* t) {
        string s;
        if (t==NULL) return s;
        return construct(t).substr(1, construct(t).length()-2);
    }
};
