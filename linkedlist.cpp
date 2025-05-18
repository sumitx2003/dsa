#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        this->data=data1;
        this->next=NULL;
    }
};
void insert(Node* &head,int d){
    // create the new node
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    // head pointed to the node1
    Node* head=node1;
    Node* tail=node1;
    cout<<"the head of the linked list is :";
    print(head);
   // insert(head,13)
    insertAtTail(tail,12);
    cout<<endl;
    cout<<"the new linked list is :";
    print(head);
    return 0;
}
