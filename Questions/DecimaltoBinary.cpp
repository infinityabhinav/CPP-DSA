#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int mul=1,ans=0;
    while(n>0){
        ans=ans+mul*(n%2);
        mul*=10;
        n=n/2;
    }
    cout<<"the number converted to binary is :"<<ans;
    return 0;
}