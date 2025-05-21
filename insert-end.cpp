#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

int main(){
    Node* head=NULL;
     vector<int>arr={1,2,3,4};
     for(int i=0;i<arr.size();i++){
         
         if(head==NULL){
        head=new Node(arr[i]);
    }
    else{
        Node* temp=new Node(arr[i]);
        temp->next=head;
        head=temp;
    }  
  } 
     
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    return 0;
}
