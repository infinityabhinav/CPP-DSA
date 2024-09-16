/*
1   2   3   4   5
6   7   8   9   10
11  12  13  14  15
*/
#include<iostream>
using namespace std;
int main(){
    int row,col,count=0;
    cout<<"enter row and cls :";
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            count++;
            cout<<count<<"   ";

        }
        cout<<endl;
    }
}