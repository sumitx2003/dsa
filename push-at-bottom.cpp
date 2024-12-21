#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s){
    // base condition
    if(s.empty()){
        s.push(4);
        return ;
    }
    int num=s.top();
    s.pop();
    solve(s);
    s.push(num);

}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    solve(s);
   while (!s.empty()) {
        int x = s.top();
        cout << x << endl;
        s.pop();
    }
    return 0;
}
