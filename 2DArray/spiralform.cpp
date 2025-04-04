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
    int minr=0,maxr=m-1,minc=0,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        //down
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc]<<" ";
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        //top
        for(int j=maxr;j>=minr;j--){
            cout<<arr[j][minc]<<" ";
        }
        minc++;
    }
    return 0;
}