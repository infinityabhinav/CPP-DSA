/*
a a a 
b b b
c c c
*/
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row and cls :";
    cin>>row>>col;

    for(int i='a';i<'a'+row;i++){
        for(int j=1;j<=col;j++){
            cout<<char(i)<<" " ;
        }
        cout<<endl;
    }


    return 0;
}