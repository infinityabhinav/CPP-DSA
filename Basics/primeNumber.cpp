#include<iostream>
using namespace std;
int main(){
    int n,flag=0;//kisi bhi program me phle declare karte jaao jiski jarurat padegi top me usko...or baad me program me bina kisi error ke use karte jaao
    cout<<"enter a number to check prime :";
    cin>>n;
    //program kuch nhi bas hum kya karte h or kya karna chhte h uska logic likho or kaho
    for(int i=1;i<=n;i++){
        if(i==1||i==n){
            continue;
        }
        else{
            if(n%i==0){
                flag=1;
            }
            break;
        }
    }
    if(flag==0)
    {
        cout<<"prime !!";
    }
    else{
        cout<<"Not Prime !!";
    }
}
//program me hume logic banana hota h ki karn akya h or kaise achieve kare....thik h