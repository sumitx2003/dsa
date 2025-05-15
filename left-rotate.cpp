#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>rotate(vector<int>arr){
    int n=arr.size();
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    vector<int>rotated=rotate(arr);
    for(int i=0;i<rotated.size();i++){
        cout<<rotated[i]<<" ";
        
    }
    return 0;
}
