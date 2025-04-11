#include<iostream>
using namespace std;

void merge(int a[],int n1,int b[],int n2,int arr[]){
    int size=n1+n2;
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    if(i==n1 && j<n2){
        while(j<n2){
            arr[k]=b[j];
            k++;
            j++;
        }

    }
    else{
        while(i<n1){
            arr[k]=a[i];
            k++;
            i++;
        }

    }


}


void mergeSort(int arr[],int n){
    if(n==1) return;

    int size=n;
    int n1=size/2;
    int n2=size-(size/2);
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[j+n1];
    }



    mergeSort(a,n1);
    mergeSort(b,n2);
    merge(a,n1,b,n2,arr);

    

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

    mergeSort(arr,10);

    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}