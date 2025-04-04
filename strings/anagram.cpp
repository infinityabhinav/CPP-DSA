#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s,s1;
    cout<<"enter string 1 ";
    cin>>s;
    cout<<"enter string 2 :";
    cin>>s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s==s1){
        cout<<"anagram";
    }
    else{
        cout<<"not an anagram";
    }
    return 0;
}