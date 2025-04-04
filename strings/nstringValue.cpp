#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> v;
    v.push_back("0123");
    v.push_back("0023");
    v.push_back("456");
    v.push_back("00182");
    v.push_back("940");
    v.push_back("2901");
    int mc=stoi(v[0]);
    for(int i=1;i<v.size();i++){
        if(stoi(v[i])>mc){
            mc=stoi(v[i]);
        }
    }
    cout<<mc;


    return 0;
}