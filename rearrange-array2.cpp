#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<climits>
using namespace std;
int main(){
    // rearrange the array by the sign using better approach
    
    vector<int>arr={3,-2,-1,-5,2,4,7,8};
    int n=arr.size();
   vector<int>pos;
   vector<int>neg;
   for(int i=0;i<n;i++){
       if(arr[i]<0){
           neg.push_back(arr[i]);
       }
       else{
           pos.push_back(arr[i]);
       }
   }
   int x=min(pos.size(),neg.size());
   for(int i=0;i<x;i++){
      arr[2*i]=pos[i];
      arr[2*i+1]=neg[i];
   }
   int index=2*x;
   for(int i=x;i<n;i++){
       if(pos.size()>neg.size()){
           arr[index++]=pos[i];
       }
       else{
           arr[index++]=neg[i];
       }
   }
   cout<<"this is the rearranged array :";
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
