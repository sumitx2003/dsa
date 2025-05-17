#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<climits>
using namespace std;
int main(){
    // rearrange the array by the sign using the brute force 
    
    vector<int>arr={3,-2,-1,-5,2,4};
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
    for(int i=0;i<n/2;i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
   
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
