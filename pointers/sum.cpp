#include<iostream>
using namespace std;
int main(){
    cout<<"Hello Jii Kiase ho !!";
    cout<<"Playing with pointers !!"<<endl;
    int x,y;
    int *p=&x,*q=&y;
    cout<<"enter value for x and y :";
    cin>>*p>>*q;
    cout<<"sum is :"<<*p+*q;
    return 0;
}