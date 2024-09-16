/*
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){

    int row,col;
    cout<<"enter row and cols :";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=col;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
