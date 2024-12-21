#include<bits/stdc++.h>
using namespace std;
string addbinary(string a,string b){
    int i=a.size()-1;
    int j=b.size()-1;
    string res;
    int carry=0;
    while(i>=0 || j>=0 || carry){
        int sum=carry;
        if(i>=0){
            sum+=a[i]-'0';
            i--;
        }
        if(j>=0){
            sum+=b[j]-'0';
            j--;
        }
        carry=sum/2;
        res.push_back(sum%2+'0');
   }
   reverse(res.begin(),res.end());
   return res;

}
int main(){
    string a="101";
    string b="1";
    cout<<addbinary(a,b)<<" ";
    return 0;
}