// size
// length
// push_back()
// pop_back()
//+//concatenation
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    // cout<<s.size()<<endl;
    // cout<<s.length()<<endl;
    // s.push_back('a');
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;
    // cout<<s;
    // string t;
    // getline(cin,t);
    // cout<<s+t;
    // int l=s.size()/2;
    // cout<<s.substr(l);
    // cout<<to_string(1234).size();
    sort(s.begin(),s.end());//ascii value ke order me sort karega
    cout<<s;
    
    
    



    return 0;
}
