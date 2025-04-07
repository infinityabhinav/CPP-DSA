#include<iostream>
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


    //selection sort
    for(int i=0;i<10-1;i++){
        int minidx=i;
        for(int j=i+1;j<10;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        
        }
        swap(arr[i],arr[minidx]);
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }



    
    return 0;
}