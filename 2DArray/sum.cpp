#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter no of rows :";
    cin>>row;
    cout<<endl;
    cout<<"enter no of cols :";
    cin>>col;
    cout<<endl;

    int arr[row][col];
    cout<<"enter elements :";
    cout <<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];

        }
    }
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];

        }
    }
    cout<<endl;
    cout<<"the sum of elements is :"<<sum;

    return 0;
}
