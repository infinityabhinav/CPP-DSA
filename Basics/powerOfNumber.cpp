#include<iostream>
using namespace std;

int main(){
    int n,pow,val;
    cout<<"enter number :";
    cin>>n;
    cout<<"enter power to find:";
    cin>>pow;
    val=n;
    for(int i=1;i<pow;i++)
    {
        val=val*n;
        

    }
    cout<<"value is : "<<val;

    return 0;
}