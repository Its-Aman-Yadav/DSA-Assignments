//https://www.hackerrank.com/challenges/tree-level-order-traversal/problem

void levelOrder(Node* root){                   //it will print like this
     queue<Node*> q;                           // 1 2 3 4 5 6
     q.push(root);

     while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);

     }
}
