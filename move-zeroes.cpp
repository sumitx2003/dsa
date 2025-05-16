#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// tis is the better approach
vector<int>move(vector<int>arr){
    int n=arr.size();
    int index=0;
    vector<int>temp(n);
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
          temp[index]=arr[i];
          index++;
        }
    }
    return temp;
}
int main(){
    vector<int>arr={1,0,2,3,2,0,0,4,5,1};
    vector<int>res=move(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
