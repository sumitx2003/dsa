#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// this is the brute force approach
vector<int>leftrotate(vector<int>arr,int d){
    int n=arr.size();
     d=d%n;
    vector<int>ans;
    for(int i=d;i<arr.size();i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<d;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}

// this is the better approach
vector<int>lrotate(vector<int>arr,int d){
 int n=arr.size();
 d=d%n;
 reverse(arr.begin(),arr.begin()+d);
 reverse(arr.begin()+d,arr.end());
 reverse(arr.begin(),arr.end());
 return arr;
}
int main(){
     vector<int>arr={1,2,3,4,5};
    int d=2;
    vector<int>res=leftrotate(arr,2);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    vector<int>vec=lrotate(arr,2);
    for(int j=0;j<vec.size();j++){
        cout<<vec[j]<<" ";
    }
    return 0;
}
