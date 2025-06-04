#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
int main(){
    Node* head=NULL;
    Node* tail=head;
    
    // insert at end 
    
    vector<int>arr={1,2,3,4,5,6};
    
    for(int i=0;i<arr.size();i++){
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
            Node* temp=new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }
    
    // print the LL
    Node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}
