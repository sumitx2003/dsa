#include<bits/stdc++.h>
using namespace std;
void reverse(stack<char>s,string str){
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans=" ";
    while(!s.empty()){
        char top=s.top();
        ans.push_back(top);
        s.pop();
    }
    cout<<"The reverse of the string is :"<<ans<<endl;
}
int main(){
    stack<char>s;
    string str="sumit";
    reverse(s,str);
    return 0;
}