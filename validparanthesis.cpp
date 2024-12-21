#include<bits/stdc++.h>
using namespace std;
bool isvalid(stack<char>s,string str){
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='[' || ch=='{' || ch=='('){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                int top=s.top();
                if((ch==']' && top=='[' )||
                   (ch=='}' && top=='{') ||
                   (ch==')' && top=='(') ){
                    s.pop();
                   }
                   else{
                    return false;
                   }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    stack<char>s;
    string str="[{()}]";
    cout<<isvalid(s,str);
    return 0;
}