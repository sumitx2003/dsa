#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
int main(){
    Node* head=NULL;
    vector<int>arr={1,2,3,4};
    Node* tail=head;
  for(int i=0;i<arr.size();i++){
      if(head==NULL){
          head=new Node(arr[i]);
           tail=head;
      }
      else{
           tail->next=new Node(arr[i]);
           tail=tail->next;
      }
  }
  
  if(head!=NULL){
      Node* temp1=head;
      head=head->next;
      delete temp1;
  }
     Node* curr=head;
   while(curr!=NULL){
        cout<<curr->data<<" ";
         curr=curr->next;
   }
     
     
    return 0;
}
