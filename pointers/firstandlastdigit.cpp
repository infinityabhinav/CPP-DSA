#include<iostream>
using namespace std;
void find(int n,int *p,int *q){
    *q=n%10;
    while(n>9){
        n/=10;
    }
    *p=n;
}
int main(){
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    int fdig,ldig;
    find(n,&fdig,&ldig);
    cout<<"first digit is :"<<fdig<<" "<<"last digit is :"<<ldig;
    return 0;
}