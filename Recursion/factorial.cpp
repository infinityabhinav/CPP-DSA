#include<iostream>
using namespace std;
int fact(int n){
   if(n==1 || n==0 ) return 1;
   return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    cout<<endl;
    cout<<"the factorial is : "<<fact(n);
    return 0;
}