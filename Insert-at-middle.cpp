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
 Node* createLL(vector<int>arr,int index,int size){
     // base case
     if(index==size){
         return NULL;
     }
     Node* temp=new Node(arr[index]);
     temp->next=createLL(arr,index+1,size);
     return temp;
 }
int main(){
    Node* head=NULL;
    vector<int>arr={1,2,3,4};
    
    head=createLL(arr,0,4);
    int x=2;  // insert at any position 
    int value=30;
    Node* temp=head;
    x--;
    while(x--){
        temp=temp->next;
        
    }
    Node* temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;
    
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    
    return 0;
}
