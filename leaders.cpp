#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<climits>
using namespace std;
int main(){
    vector<int>arr={10,22,12,0,3,6};
    int n=arr.size();
    
    // this is the brute force approach 
    cout<<"The Leaders in the array are :";
    for(int i=0;i<n;i++){
        bool isLeader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                isLeader=false;
            }
        }
        if(isLeader){
            cout<<arr[i]<<" ";
        }
    }
    
    // this is the better approach
    cout<<"\nthe leaders are the :";
    int max1=arr[n-1];
    vector<int>res;
    res.push_back(max1);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max1){
            max1=arr[i];
            res.push_back(max1);
        }
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
    
}
