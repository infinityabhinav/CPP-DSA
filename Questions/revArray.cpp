#include<iostream>
using namespace std;
void revArr(int arr[],int n){
     int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}
int main(){
    int n;
    cout<<"enter the size for the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    revArr(arr,n);
    cout<<"reverseed array is :"<<endl;
   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}