//https://leetcode.com/problems/binary-tree-preorder-traversal/description/

class Solution {
public:
    vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
                if(root){
                  res.push_back(root->val);
                  preorderTraversal(root->left);
                  preorderTraversal(root->right);
                }
          return res;
    }
};
