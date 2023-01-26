//https://www.hackerrank.com/challenges/tree-inorder-traversal/problem

 void inOrder(Node *root) {
         if(!root) 
           cout<< NULL;
         
         Node* TreeNode = root;
         stack<Node*> s;
         
        
         while(true){
             if(TreeNode != NULL){
                s.push(TreeNode);
                TreeNode = TreeNode->left;
             }
             
             else{
                 if(s.empty() == true){
                     break;
                 }
                 
                 else{
                     TreeNode = s.top();
                     s.pop();
                     cout<<TreeNode->data<<" ";
                     TreeNode = TreeNode->right;
                 }
                     
                 
             }
         }
        
         
    }

};
