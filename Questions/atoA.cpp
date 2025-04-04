#include<iostream>
using namespace std;
char cap(char ch){
    return char(ch-32);
}
int main(){
    char ch;
    cout<<"enter a character :";
    cin>>ch;
    cout<<"capital form is :"<<ch<<" to "<<cap(ch);
    return 0;
}