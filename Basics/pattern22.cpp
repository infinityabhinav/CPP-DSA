/*

  *   
 * *  
***** 
*   * 
*   * 

****  
*   * 
****  
*   * 
****  

*   * 
*   * 
***** 
*   * 
*   * 

***** 
  *   
  *   
  *   
***** 

*   * 
**  * 
* * * 
*  ** 
*   * 

  *   
 * *  
***** 
*   * 
*   * 

*   * 
*   * 
*   * 
 * *  
  *   




*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //for A
    int row;
    cout<<"enter rows :";
    cin>>row;
    int rhalf=ceil(row/2);

    for(int i=1;i<=rhalf;i++){
        if(i==1||i==rhalf){
              for(int j=1;j<=rhalf;j++){
                cout<<"*";
                }
            }
            else{
                 for(int j=1;j<=rhalf;j++){
                    if(j==1||j==rhalf){
                        cout<<"*";

                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }
            cout<<endl;
      
    }

    for(int i=rhalf+1;i<=row;i++){
        for(int j=1;j<=rhalf;j++){
            if(j==1||j==rhalf){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }



    return 0;
}