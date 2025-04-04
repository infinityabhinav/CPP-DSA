#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter no of rows and cols :";
    cin>>row>>col;
    cout<<endl;
    int arr[row][col];
    cout<<"enter the elements :";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];

        }
    }
    cout<<endl;
    cout<<"transpose is :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            if(i==j) continue;
            else{
                swap(arr[i][j],arr[j][i]);
            }

        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    
    return 0;
}