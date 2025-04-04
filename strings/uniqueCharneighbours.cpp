#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter string :";
    getline(cin,str);
    cout<<endl;
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str.length()==1){
            break;
        }
        else if(str.length()==2){
            if(str[i]!=str[i+1]){
                count =1;
                break;
            }
    
        }
        else{
            int j=i-1;
        int k=i+1;
        if(j<0||k>=str.length()){
            if(j<0){
                if(str[i]!=str[k]){
                    count++;
                }

            }
            else{
                if(str[i]!=str[j]){
                    count++;
                }
            }


        }
        else{
       
        if(str[i]!=str[j]&&str[i]!=str[k]){
            count++;
        }

        }

        }
        
       
    }
    cout<<"unique neughbours wale characters h :"<<count;
    return 0;
}