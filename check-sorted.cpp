#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
            continue;
        }
        else{
            break;
        }
    }
    return 0;
}
