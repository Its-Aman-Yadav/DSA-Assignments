//https://leetcode.com/problems/binary-tree-inorder-traversal/description/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        
        if(root == NULL){
            return res;
        }
        
        stack<TreeNode*>s;
        TreeNode* node = root;
        
        while(true){
            if(node != NULL){
                s.push(node);
                node = node->left;
            }else{
				
                if(s.empty() == true){
                    break;
                }
                node = s.top();
                s.pop();
                res.push_back(node->val);
                node = node->right;
            }
        }
        
        return res;
    }
};
