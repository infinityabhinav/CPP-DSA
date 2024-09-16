/*
1 2 3
1 2 3
1 2 3
*/
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter rows :";
    cin>>row;
    cout<<"enter cols :";
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
