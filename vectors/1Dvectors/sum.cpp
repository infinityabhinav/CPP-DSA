#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter size for the array :";
    cin>>n;
    cout<<"enter the elements :";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<"sum is :"<<sum;
    return 0;
}