#include <iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"enter elements :";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"original elements order !! :"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }


    //bubble sorting 
    for(int i=0;i<10-1;i++){
        for(int j=0;j<j<10-1-i;j++){
            swap(arr[j],arr[j+1]);
        }
    }

    for(int i=0;i<10;i++){
        cout<<arr[i];
    }


}