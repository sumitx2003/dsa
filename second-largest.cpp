#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int  arr[]={1,2,7,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // sort(begin(arr),end(arr));  // this is the brute force approach
    // int  largest=arr[n-1];
    // int second=-1;
   // for(int i=n-2;i>=0;i--){
       // if(arr[i]!=largest){
          //  second=arr[i];
          //  break;          // here break using bcz it helps to out
       // }
   // }
    // cout<<"the second largest number is :"<<second;
    
    // using the optimal approach
    int largest=arr[0];
    int second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second){
            second=arr[i];
        }
    }
    cout<<"This is the second largest element in the array:"<<second;
    return 0;
}
