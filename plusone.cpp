#include<iostream>
#include<vector>
using namespace std;
vector<int> plusone(vector<int>&digits){
    for(int i=digits.size()-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]+=1;
            return digits;
        }
        digits[i]=0;
        if(i==0){
            digits.insert(digits.begin(),1);
            return digits;
        }
    }
    return digits;
}
int main(){
     vector<int>digits={1,2,9};
    vector<int>result=plusone(digits);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}