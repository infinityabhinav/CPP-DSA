#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string :";
    getline(cin,s);
    cout<<endl;
    cout<<s<<endl;
    int mid=s.length()/2;
    int i=0;
    int j=mid-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
    return 0;
}