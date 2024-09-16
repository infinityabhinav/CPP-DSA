#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"how much natural u=numbers you want to be printed in reverse order :";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
    return 0;
}