#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter a string :";
    getline(cin,s);
    // int mcount=0;
    // char a;
    // for(int i=0;i<s.size();i++){
    //     int count =1;
    //     for(int j=i+1;j<s.size();j++){
    //         if(s[j]==s[i]) count++;

    //     }
    //     if(mcount<count) {mcount=count; a=s[i];}

    // }
    // cout<<mcount <<a; //worst method
    

    //using extra array
    vector<int> v(26);
   for(int i=0;i<s.size();i++){
    int ch=s[i];
    int ascii=(int)ch;
    v[ascii-97]+=1;;

   }
   int mc=0;
   for(int i=0;i<26;i++){
    if(mc<v[i]) mc=v[i];
   }
   for(int i=0;i<26;i++){
    if(mc==v[i]){
        cout<<(char)(i+97)<<endl;
        cout<<mc;
    }
   }


}