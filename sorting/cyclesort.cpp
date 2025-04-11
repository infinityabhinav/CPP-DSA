#include<iostream>
using namespace std;

//jab 1,n ya (0,n) range di hoti h toh hum iska istemaal karte h
void cyclesort(int arr[],int n){
    //4 3 2 5 1
    int i=0;
    while(i<n){
        if((arr[i]-1)==i) i++;
        else{
            swap(arr[i],arr[(arr[i]-1)]);
        }

    }


}
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

    cyclesort(arr,10);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}