#include<iostream>
using namespace std;
void function(int& count){
    if(count==3){  // this is the base condition which prevent the stack overflow
        return;
    }
    cout<<count;
    count++;
    function(count);
}
int main(){
    int count=0;
    function(count);
    return 0;
}
