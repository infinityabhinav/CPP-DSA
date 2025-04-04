#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="musafir";
    string s1="123456";
    int x=stoi(s1);
    cout<<x+1;
    int x1=stoll(s1);
    cout<<x1+1;
    return 0;
}