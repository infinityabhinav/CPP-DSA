#include<iostream>
using namespace std;
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
    int x,y;
    int *p=&x,*q=&y;
    cout<<"enter the x and y :";
    cin>>*p>>*q;
    swap(p,q);
    cout<<x<<" "<<y;
    return 0;
}