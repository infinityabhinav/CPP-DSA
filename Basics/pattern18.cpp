/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
    

  */

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter rows :";
    cin>>row;

    for(int i=1;i<=row;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }

        for(int k=row-1;k>=i;k--){
            cout<<"* ";
        }
        for(int l=row;l>=i;l--){
            cout<<"* ";
        }
        cout<<endl;

    }



    return 0;
}
