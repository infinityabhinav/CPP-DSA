/*

5
5 4 
5 4 3
5 4 3 2 
5 4 3 2 1


*/

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter rows:";
    cin>>row;

    for(int i=row;i>=1;i--){
        for(int j=row;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}