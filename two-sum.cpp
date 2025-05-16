#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> numMap; // number -> index

    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];

        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // found the pair
        }

        numMap[arr[i]] = i; // store the index of current number
    }

    return {}; // return empty if no solution (won't happen as per the problem)
}
int main(){
    vector<int>arr={2,6,5,8,11};
    int target=14;
    // brute force approach
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            if(i==j){
                continue;
            }
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<","<<arr[j];
            }
        }
    }
    cout<<endl;
    
    // using the better appproch for two sum using the hashmap
    vector<int>res=twosum(arr,14);
    for(int i=0;i<res.size();i++){
        cout<<res[i];
    }
    
    return 0;
}
