#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>
using namespace std;
// this is the better approach
int main(){
    vector<int>arr={1,1,2,3,3,4,4};
    unordered_map<int,int>map;
    for(int i=0;i<arr.size();i++){
        map[arr[i]]++;
    }
    
    for(auto it:map){
        if(it.second==1){
            cout<<it.first;
        }
    }
    return 0;
    
}
