#include<iostream>
using namespace std;
int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"enter term to know :";
    cin>>n;
    int val=fib(n);
    cout<<"the term value is "<<val;




    return 0;
}