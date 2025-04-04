int findceil(BinaryTree<int>* root,int key){
  int ceil=-1;
  while(root){
      if(root->data==key){
          ceil=root->data;
          return ceil;
      }
      if(key>root->data){
          root->right;
      }
      else{
          ceil=root->data;
          root=root->left;
      }
  }
  return root;
}
