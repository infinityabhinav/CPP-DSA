#include<iostream>
using namespace std;
void trail(int n){
        int q=0;
    while(n>=5){
        q+=n/5;
        n=n/5;

    }
    cout<<"total trailing zeroes are :"<<q;
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    trail(n);
    return 0;
}