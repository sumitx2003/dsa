#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root){
    int data;
   // cout<<"Enter the data :";
    cin>>data;
    root=new node(data);
    
    if(data==-1){
        return NULL;
    }
    root->left=buildtree(root->left);
    root->right=buildtree(root->right);
    return root;
    
}
void levelorder(node* root){
    queue<node*>q;
    
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
      }
   }
}
void inorder(node* root){
    if(root==NULL){  // base condition hai yaha par
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Enter the data :";
    root=buildtree(root);
    
    cout<<"The level order traversal is :";
    levelorder(root);
    cout<<endl;
    
    cout<<"the inorder traversal is :";
    inorder(root);
    cout<<endl;
    
    cout<<"The preorder traersal is :";
    preorder(root);
    cout<<endl;
    
    cout<<"The postorder traversal is :";
    postorder(root);
    
    return 0;
}
