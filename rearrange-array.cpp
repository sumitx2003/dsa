#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<climits>
using namespace std;
int main(){
    // rearrange the array by the sign using better approach
    
    vector<int>arr={3,-2,-1,-5,2,4};
    int n=arr.size();
    vector<int>ans(n,0);
    int posIndex=0;
    int negIndex=1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
        else{
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
    }
    cout<<" the new rearranged array is :";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
