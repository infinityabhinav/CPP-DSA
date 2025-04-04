#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students :";
    cin>>n;
    int arr[n][2];
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            if(j==0){
                cout<<"enter roll for student "<<i+1;
                cin>>arr[i][j];
                cout<<endl;
            }
            else{
                cout<<"enter marks for student "<<i+1;
                cin>>arr[i][j];
                cout<<endl;
            }

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}