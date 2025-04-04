#include<iostream>
using namespace std;
void rev(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    

}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    rev(arr,1,4);
    cout<<"partial reversed array is :";
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" "; 
    }
}