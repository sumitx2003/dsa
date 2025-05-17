#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<climits>
using namespace std;
int main(){
    // maximum subarray sum  using kadane algorithm
    vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
    int n=arr.size();
    int maxSum=INT_MIN;
    int currentsum=0;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum>maxSum){
            maxSum=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    }
    cout<<"The max subbary sum usint the kadanes algorithm is :"<<maxSum;
    return 0;
}
