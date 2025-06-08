#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>arr={5,10,30,20,15};
    int k=3;
    int start=0;
   int end=0;
    int ans=-1;
    for(int i=0;i<arr.size();i++){
        start=max(start,arr[i]);
        end=end+arr[i];
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        int length=0;
        int w=1;
        for(int i=0;i<arr.size();i++){
            if(length+arr[i]>mid){
                w++;
                length=arr[i];
            }
            else{
                length+=arr[i];
            }
        }
        if(w<=k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout << "Minimum time to paint all boards: " << ans << endl;
    return 0;
}
