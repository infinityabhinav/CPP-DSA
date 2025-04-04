#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"enter rows and cols for matrix 1 :";
    cin>>m>>n;
    cout<<endl;
    cout<<"enter rows and cols for matrix 2";
    cin>>p>>q;
    cout<<endl;
    if(n==p){
    int arr[m][n],brr[p][q];
    cout<<"enter elements for matrix 1"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"enter elements for matrix 2"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }
    cout<<endl;
    //matrix multiplication
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<n;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
            
        }
    }
    //displaying
    cout<<"matrix muliplication is :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    }
    else{
        cout<<"multiplication cannot be done ";
    }


    return 0;
}