#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    // majority element by better approach
    vector<int>arr={2,2,2,3,1,2,2};
    int n=arr.size();
    map<int,int>map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for(auto it:map){
        if(it.second>n/2){
            cout<<"The is the majority element in the array is :"<<it.first;
        }
    }
     return 0;
}
