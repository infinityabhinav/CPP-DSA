#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size for the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    while(i<n){
        if((i+1)>=n) break;
        swap(arr[i],arr[i+1]);
        i=i+2;
    }
    cout<<"array after alternate swap is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}