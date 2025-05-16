#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// this is the better approach
int main(){
    vector<int>arr={3,0,1};
    int n=arr.size();
    int totalsum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
    }
    int mis=totalsum-sum;
    cout<<"The missing nummber in the array is :"<<mis;
    return 0;
}
