//https://leetcode.com/problems/binary-tree-postorder-traversal/description/

class Solution {
public:
    vector<int> res;
    vector<int> postorderTraversal(TreeNode* root) {
            if(root){
              postorderTraversal(root->left);
              postorderTraversal(root->right);
              res.push_back(root->val);
            }

        return res;
    }
};
