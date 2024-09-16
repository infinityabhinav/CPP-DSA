#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the fibonacci term to know at which place :";
    cin>>n;
    int a=0,b=1,sum=0;
    if(n==1)
    cout<<"the term is : "<<a;
    else if(n==2)
    cout<<"the term is : "<<b;
    else{
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;

    }
    }

    cout<<"the term is : "<<sum;



}