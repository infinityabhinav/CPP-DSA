#include <iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"enter elements :";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    //bubble sort
    for(int i=0;i<10-1;i++){
        int flag =0;
        for(int j=0;j<10-1-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=1;
            }
        }
        if(flag==0) break;
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }


}