#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s,int count,int n){
    // base condition
    if(count==n/2){
        s.pop();
        return ;
    }
    int num=s.top();
    s.pop();
    solve(s,count+1,n);
    s.push(num);

}
int main(){
    stack<int>s;
    int count=0;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int n=s.size();
    solve(s,count,n);
   while (!s.empty()) {
        int x = s.top();
        cout << x << endl;
        s.pop();
    }
    return 0;
}