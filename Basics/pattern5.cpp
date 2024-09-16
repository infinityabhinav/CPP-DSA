/*
    a b c d 
    a b c d
    a b c d
    a b c d
*/

#include<iostream>
using namespace std;
int main (){
    int row,col;
    cout<<"enter row and cls :";
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j='a';j<'a'+col;j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }

}