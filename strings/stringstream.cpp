#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string s="Abhinav is a boy ";
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }

}