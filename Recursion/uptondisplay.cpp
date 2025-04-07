#include<iostream>
using namespace std;
void display(int start,int n){
    // if(n==0 ) return;
    // cout<<n <<" ";
    // display(n-1);


    if(start>n) return;
   cout<<start <<' ';
   display(start+1,n);

}
void display(int n){
    if(n==0) return;
    display(n-1);
    cout<<n<<" ";

}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    display(n);
    return 0;
}