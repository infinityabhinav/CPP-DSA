#include<iostream>
#include<vector>
using namespace std;
void lastIndex(vector<int>arr, int v){
    int li=-1;
    for(int i=0;i<arr.size();i++){
        if(v==arr[i]){
            if(i>li) li=i;
        }

    }
    cout<<"last index for this element is :"<<li<<endl;



}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    lastIndex(v,1);
    lastIndex(v,2);
    lastIndex(v,3);

    return 0;
}