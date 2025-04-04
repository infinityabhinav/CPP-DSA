#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> v;
    vector<int> rev;
    cout<<"enter size for the array: ";
    cin>>n;
    cout<<endl;
    cout<<"enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    //reversing the vector with help of extra vector 
    for(int i=v.size()-1;i>=0;i--){
        rev.push_back(v[i]);
    }
    cout<<"the reverse array is :";
    for(int i=0;i<rev.size();i++){
        cout<<rev[i]<<" ";
    }



}