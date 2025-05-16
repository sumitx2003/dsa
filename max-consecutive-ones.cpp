#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// this is the better approach
int main(){
    vector<int>arr={1,1,0,1,1,1,0,1,1};
    int count=0;
    int max=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
            if(max<count){
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    
    cout<<"The maximum consecutive ones are :"<<max;
    
    return 0;
}
