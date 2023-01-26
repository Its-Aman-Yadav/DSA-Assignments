//https://www.hackerrank.com/challenges/tree-postorder-traversal/problem

void postOrder(Node *root) {
         if(!root){
             return;
         }
         
         postOrder(root->left);
         postOrder(root->right);
         cout<<root->data<<" ";
    } 
