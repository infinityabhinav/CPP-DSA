#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row and cols :";
    cin>>row>>col;
    cout<<endl;
    int arr[row][col];

cout<<"enter elements :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int max=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<"maximum in your 2d array is :"<<max<<endl;
    return 0;
}