//https://leetcode.com/problems/balanced-binary-tree/description/


class Solution {
  public:
    int height(TreeNode* node){
    if (node == NULL)
        return 0;
 
    return 1 + max(height(node->left), height(node->right));
}
 
bool isBalanced(TreeNode* root){
    if (root == NULL)
        return 1;

    int lh = height(root->left);
    int rh = height(root->right);
 
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
 
    return 0;
}
};
