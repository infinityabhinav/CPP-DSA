#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){

    //best way to make pivot element is to choose bw si+ei/2  as nhi toh o(n^2) ho jaega




    int piEl=arr[(si+ei)/2];
    int pivotIdx=-1;  
    int count =-1;
    for(int i=si;i<=ei;i++){
        if(arr[i]<=piEl) count++;
    }
    pivotIdx=si+count;

    swap(arr[(si+ei)/2],arr[pivotIdx]);

    int i=si,j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<arr[pivotIdx]) i++;
        if(arr[j]>arr[pivotIdx]) j--;
        if(arr[i]>arr[pivotIdx] && arr[j]<arr[pivotIdx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        }
    return pivotIdx;
}

void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);

    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);

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

    quicksort(arr,0,9);

    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}