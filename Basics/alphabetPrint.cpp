#include<iostream>
using namespace std;
int main(){
    //either do this
    // for(int i=65;i<91;i++)
    // {
    //     cout<<char(i)<<" ";
    // }

    //or this
    //isme apne aap ascii value chli jaegi so samjh lo bas
    for(int i='a';i<='z';i++)
    {
        cout<<char(i)<<" ";
    }
    return 0;
}