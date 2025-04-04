#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the size for the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    //finding minimum in array 
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"minimum in array is :"<<min;

    return 0;
}
