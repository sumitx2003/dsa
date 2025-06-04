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
    
    // insert at start
    
    // if LL does not exist
    if(head==NULL){
        head=new Node(5);
    }
    // alrready exist
    else{
        Node* temp=new Node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
    // print the LL
    Node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}
