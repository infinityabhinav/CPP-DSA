/*

*      *
**    **
***  ***
********
***  ***
**    **
*      *





*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter row :";
    cin>>row;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=row-1;j>=i;j--){
            cout<<" ";

        }
          for(int k=row-1;k>=i;k--){
            cout<<" ";
            
        }
        for(int l=1;l<=i;l++){
            cout<<"*";

        }
        cout<<endl;
    }

    for(int i=row-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int k=1;k<=row-i;k++){
            cout<<" ";
        }
        for(int l=1;l<=row-i;l++){
            cout<<" ";
        }
          for(int m=i;m>=1;m--){
            cout<<"*";
        }
        cout<<endl;

    }




    return 0;
}