//two sum problem
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    vector<int> v;
    cout<<"enter target :";
    cin>>x;
    cout<<endl;
    //entering size
    int n;
    cout<<"enter the no of elements :"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    //finding the doublets
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }



        }


    }

    return 0;
}