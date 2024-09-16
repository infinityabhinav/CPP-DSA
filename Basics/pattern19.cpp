/*
********
***  ***
**    **
*      *
**    **
***  ***
********

*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter row:";
    cin>>row;

    for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--){
            cout<<"*";
        }
        for(int x=1;x<i;x++){
            cout<<" ";
        }
        for(int x=1;x<i;x++){
            cout<<" ";
        }
        for(int k=row;k>=i;k--){
            cout<<"*";
        }

        cout<<endl;

    }
    for(int i=1;i<=row-1;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        for(int k=1;k<=row-1-i;k++){
            cout<<" ";
        }
        for(int l=1;l<=row-1-i;l++){
            cout<<" ";
        }
        for(int m=1;m<=i+1;m++){
            cout<<"*";
        }
        cout<<endl;
    }




    return 0;
}