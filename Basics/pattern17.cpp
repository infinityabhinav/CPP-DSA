/*
    1
  1 2 1
1 2 3 2 1 

*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter rows :";
    cin>>row;

    for(int i=1;i<=row;i++){
        //space
        for(int j=row-1;j>=i;j--){
            cout<<" ";

        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int l=i;l>1;l--){
            cout<<l-1<<" ";
        }
        cout<<endl;
    }
}