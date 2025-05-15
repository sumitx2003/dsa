#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,2,1,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    // this is the brute force  
   // sort(begin(arr),end(arr));
   // cout<<arr[n-1];
   
   // now use the better approach
   int largest=arr[0];
   for(int i=1;i<n;i++){
       if(arr[i]>largest){
           largest=arr[i];
       }
   }
   cout<<"This is the largest element present in the array :"<<largest;
   
    return 0;
}
