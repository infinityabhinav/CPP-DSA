#include<iostream>
using namespace std;
void revPart(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void rot(int arr[],int k){
    revPart(arr,0,5-k-1);
    revPart(arr,5-k,4);
    revPart(arr,0,4);
}


int main(){
    int arr[]={1,2,3,4,5};
    int k;
    cout<<"enter k:";
    cin>>k;
    rot(arr,k);
    cout<<"the elements after rotataed is :"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}