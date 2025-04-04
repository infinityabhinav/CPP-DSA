#include<iostream>
#include <cmath>
using namespace std;
void arm(int n){
    if(n<10){
        cout<<"Number is Armstrong Number !!";

    }
    else{

    //counting digits
    int dig=0;
    int temp=n;
    while(temp>0){
        temp/=10;
        dig ++;
    }
    //checking sum now
    temp=n;
    int sum=0;
    while(temp>0){
        sum=sum+pow(temp%10,dig);
        temp=temp/10;
    }
    

        if(n==sum){
            cout<<"number is armstrong number !!";
        }
        else{
            cout<<"Number is not Armstrong Number !!";
        }
    }


}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    arm(n);

    return 0;
}