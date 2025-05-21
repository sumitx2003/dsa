#include<iostream>
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
    Node* head=new Node(10);
    if(head==NULL){
        head=new Node(20);
    }
    else{
        Node* temp=new Node(20);
        temp->next=head;
        head=temp;
    }
    cout<<head->data<<endl;
    cout<<head->next;
    return 0;
}
