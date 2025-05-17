#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<climits>
using namespace std;
int main(){
    // maximum subarray sum  using brute foce approach
    vector<int>arr={-2,-3,4,-1,-2,1,5,-3};
    int n=arr.size();
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
               
            }
            maxSum=max(maxSum,sum);
        }
    }
    cout<<"The max subbary sum usint the brute force is :"<<maxSum;
    return 0;
}
