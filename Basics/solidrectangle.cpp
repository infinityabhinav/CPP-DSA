#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter number of rows :";
    cin>>row;
    cout<<"enter number of columns :";
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<10<<" ";
        }
        cout<<endl;

    }

    return 0;
}