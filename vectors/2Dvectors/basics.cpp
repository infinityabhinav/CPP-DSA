#include<iostream>
#include<vector>
using namespace std;
int main(){
    //declaration
    vector<vector<int> > v1;
    vector<vector<int> > v(3,vector<int>(4));

    vector<int> p;
    p.push_back(1);
    p.push_back(2);
    p.push_back(3);
    p.push_back(4);
    v1.push_back(p);//passing vectors
    cout<<v1[0][1];
    vector<int> q;
    q.push_back(1);
    q.push_back(2);
    v1.push_back(q);//add dynamic columns 
    


    return 0;
}