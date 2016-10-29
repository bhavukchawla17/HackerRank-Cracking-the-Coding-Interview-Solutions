bool isBST(Node* root,int low,int high)
        {
        if(root==NULL) return true;
        return (root->data<=high && root->data>=low && isBST(root->left,low,root->data-1) && isBST(root->right,root->data+1,high));
    }


   bool checkBST(Node* root) {
      return isBST(root,-10010,10010);
   }
