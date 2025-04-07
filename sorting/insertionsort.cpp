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


    //insertion sort 
    for(int i=1;i<10;i++){
        int j=i-1;
        while(j>=0 && arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            j--;
        }

    }
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}