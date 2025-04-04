#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *p=&x;
    int **p1=&p;
    cout<<**p1;
    return 0;

}
