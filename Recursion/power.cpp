#include<iostream>
using namespace std;
int power(int base,int exp){
    if(exp==1) return base;
    if(exp==0) return 1;
    return base*power(base,exp-1);
}
int main(){
    int base,exp;
    cout<<"enter a base :";
    cin>>base;

    cout<<endl<<"enter a exponent :";
    cin>>exp;
    int ans=power(base,exp);
    cout<<"The Answer for : "<<base<<"^"<<exp <<" is :"<<ans;
    return 0;
}