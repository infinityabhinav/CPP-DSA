/*
     *
    * *   
   * * *

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
        //star
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
       
        cout<<endl;
    }




    return 0;
}