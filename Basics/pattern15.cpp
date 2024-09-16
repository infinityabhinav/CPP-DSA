/*
    A
   AB
  ABC
 ABCD
ABCDE


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
        //ABCDE
        for(int k=1;k<=i;k++){
            cout<<char(65+k-1);
        }
        cout<<endl;
    }


}