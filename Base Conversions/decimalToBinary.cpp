#include<iostream>
using namespace std;
int main(){
    int n,r,ans=0,mul=1;
    cout<<"==================================DECIMAL=========TO=========BINARY=========================="<<endl;
    cout<<"enter a number :";
    cin>>n;//use karna h toh phle isliye declare kara karo
   while(n>0){
    r=n%2;
    n=n/2;
    ans=ans+r*mul;
    mul*=10;
   }
   cout<<"the Answer is : "<<ans;
    return 0;
}
