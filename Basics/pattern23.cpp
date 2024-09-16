/*
for n=5:-

5 5 5 5 5  5 5 5 5 
5 4 4 4 4  4 4 4 5 
5 4 3 3 3  3 3 4 5 
5 4 3 2 2  2 3 4 5 
5 4 3 2 1  2 3 4 5 
5 4 3 2 2  2 3 4 5 
5 4 3 3 3  3 3 4 5 
5 4 4 4 4  4 4 4 5 
5 5 5 5 5  5 5 5 5 




*/

#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // First part of the pattern (ascending)
    for (int i = 1; i <= n; i++) { 
        // Loop for the first half
        int minm= INT_MAX;

        for (int j = n; j >= n - i + 1; j--) { // Loop for printing decreasing numbers
            cout << j;
            if(j<minm)
             minm=j;
        }
        for(int k=n-1;k>=i;k--){
            cout<<minm;
        }

        cout << endl; // Move to the next line after each row
    }

    // Second part of the pattern (descending)
    for (int i = n - 1; i >= 1; i--) { // Loop for the second half
            int minm= INT_MAX;
        for (int j = n; j >= n - i + 1; j--) { // Loop for printing decreasing numbers
            cout << j; // Print the current number
              if(j<minm)
             minm=j;
        }
        for(int k=i;k<=n-1;k++){
            cout<<minm;
            

        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
