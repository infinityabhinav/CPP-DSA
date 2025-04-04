#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the binary number :";
    cin>>n;
    int ans=0,mul=1;
    while(n>0){
        ans+=(n%10)*mul;
        mul*=2;
        n=n/10;
    }
    cout<<"the decimal form is :"<<ans;
    return 0;
}