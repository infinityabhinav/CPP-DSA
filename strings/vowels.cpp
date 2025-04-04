#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter desired string :";
    getline(cin,s);
    cout<<endl;
    string s1=s;
    int count =0;
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
    
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u') count++;
    }
    cout<<count;

    return 0;
}