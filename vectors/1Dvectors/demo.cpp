//pointer ko use kar sakte h lekin us concept me concept bahut complex sa lag sakta h nhi toh simple rkhna h toh h normal paas karo or normal har jagah bas fn me &
#include<iostream>
#include<vector>
using namespace std;
void change(int &p){
    p=5;


}
int main(){
    int a=3;
    change(a);
    cout<<a;
}