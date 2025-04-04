#include<iostream>
#include<vector>
using namespace std;
int main(){
    //basic operations push_back,pop_back,at,sort,capacity,size
    // vector<int> v;
    // vector<int> arr;
    // cout<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(1);
    // v.push_back(4);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.push_back(1);

    // cout<<v.capacity();
    // //entering user input and enetering elements in vector
    // int n=5;
    // cout<<"enter "<<n<<" elements :";
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     arr.push_back(x);

    // }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    
    
    vector<int> v(4,0);
    v.resize(6);
    v[5]=1;
    cout<<v[4];
    cout<<v[5];



    return 0;
}