#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int>arr,int target){
      int si=0;
    int ei=arr.size()-1;
    while(si<=ei){
        int mid=si+(ei-si)/2; // to reduce the overflow
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            ei=mid-1;
        }
        else{
            si=mid+1;
        }
        
    }
    return si;
}
int main(){
    vector<int>arr={1,3,5,6};
    int target=2;
  
    int x=binary(arr,2);
    cout<<"the index of target is :"<<x;
    return 0;
}
