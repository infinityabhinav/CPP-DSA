// #include<iostream>
// #include<vector>
// #include<sstream>
// using namespace std;
// int main(){
//     string s;
//     vector<string> v;
//     cout<<"enter a string ";
//     getline(cin,s);
//     stringstream ss(s);
//     string temp;
//     while(ss>>temp){
//         v.push_back(temp);
//     }
//     int n=v.size();
//     int mc=0;
//     for(int i=0;i<n;i++){
//         int count =1;
//         for(int j=i+1;j<n;j++){
//             if(v[j]==v[i]) count++;
//         }
//         if(mc<count) mc=count;

//     }
    
//     for(int i=0;i<n;i++){
//         int count =1;
//         for(int j=i+1;j<n;j++){
//             if(v[j]==v[i]) count++;
//         }
//        if(count==mc) {
//         cout<<v[i]<<" "<<mc;
//        }

//     }


//     return 0;
// }



//next approach
#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string s,temp;
    vector<string> v;
    cout<<"enter string :";
    getline(cin,s);
    stringstream ss(s);
    while(ss>>temp){
        v.push_back(temp);

    }
    sort(v.begin(),v.end());
    int n=v.size();
    int mc=1;
    int c=1;
    for(int i=1;i<n;i++){
        if(v[i-1]==v[i]){
            c+=1;
            mc=max(c,mc);
        }
        else c=1;
    }
     for(int i=1;i<n;i++){
        if(v[i-1]==v[i]){
            c+=1;
            
        }
        else c=1;
        if(c==mc){
            cout<<mc <<v[i];
        }
    }
    
    return 0;
}