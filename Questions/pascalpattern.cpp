#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
       int j=1;
       int f=1;
       while(j<=n){
        f*=j;
        j++;
       }
       return f;

    }

}
int main(){
    int n;
    cout<<"enter rows :";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/((fact(j)*(fact(i-j))))<<" ";
            
        }
        cout<<endl;
    }


    return 0;
}