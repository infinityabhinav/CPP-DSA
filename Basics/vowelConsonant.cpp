//a,e,i,o,u are vowels and rest are the consonants 
#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter a character :";
    cin>>c;
    char c1=toupper(c);
    // cout<<c1;
    if(c1=='A'||c1=='E'||c1=='I'||c1=='O'||c1=='U'){
        cout<<"the entered character is Vowel";
    }
    else
    cout<<"consonant !";

    return 0;
}