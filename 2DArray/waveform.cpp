// 1  2  3 
// 4  5  6 
// 7  8  9
//wave form is 1 2 3 6 5 4 7 8 9 
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows and cols for matrix 1 :";
    cin>>m>>n;
    cout<<endl;
    int arr[m][n];
    cout<<"enter elements for matrix "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //normal form
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;
    //wave form
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if(i%2==0)
            cout<<arr[i][j]<<" ";
            else{
                cout<<arr[i][n-1-j]<<" ";
            }
        }
    }

    cout<<endl;
    return 0;
}