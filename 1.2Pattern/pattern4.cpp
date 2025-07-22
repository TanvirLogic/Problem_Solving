#include<bits/stdc++.h>
using namespace std;

void print7(int n){
    for(int i=0; i<n; i++) { // Toal Rows

        // Leading spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        // Stars
        for(int j=0; j<2*i+1; j++) {
            cout << "*";
        }

        
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cin>>n;
    print7(n);  // Call the function
    return 0;
}
