#include<bits/stdc++.h>
using namespace std;
vector<int>addarray(vector<int>&arr,int key){
    for(int i=arr.size()-1;i>=0;i--){
        arr[i]+=key;
        arr[i]%=10;
        key/=10;
    }
     while(key>0){
            arr.insert(arr.begin(),key%10);
            key/=10;
        }
    return arr;
}
int main(){
    vector<int>arr={1,2,3};
    int key=34;
   vector<int>num=addarray(arr,key);
   for(int i=0;i<num.size();i++){
    cout<<num[i]<<" ";
   }
    return 0;
}