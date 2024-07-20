/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count=0;
    void cntNode(TreeNode* root){
        if (root!=NULL){
            count++;
            cntNode(root->left);
            cntNode(root->right);
            
        }
    }
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        cntNode(root);
        return count;

    }
};