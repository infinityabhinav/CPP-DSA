/*

******
*    *         
*    *
*    *
******    




*/
#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter number of rows and cols :";
    cin>>row>>col;

    for(int i=1;i<=row;i++){
          if(i==1||i==row){
            for(int j=1;j<=col;j++){
          
             cout<<"*";
        }

          }
          else{
            for(int j=1;j<=col;j++){
                if(j==1||j==col){
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
             
             }
          }
          cout<<endl;
        
    }


    return 0;
}