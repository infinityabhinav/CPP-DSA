/*

a
bb
ccc
dddd
eeeee

*/
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter rows:";
    cin>>row;

    for(int i='a';i<'a'+row;i++){
        for(int j='a';j<=i;j++){
            cout<<char(i);

        }
        cout<<endl;
    }

    return 0;
}