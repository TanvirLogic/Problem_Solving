#include <bits/stdc++.h>
using namespace std;

void print1(int n) {
    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <=i;j++ ) {
            cout << i<<" ";
           
        }
        cout << endl; // Moved inside the outer loop
    }
}
void print2(int n){
    for(int i = 0; i <=n; i++) {
        for(int j = 1; j <=n-i;j++ ) {
            cout <<j<<" ";
           
        }
        cout << endl; // Moved inside the outer loop
    }
}
int main() {
    
        int n;
        cin >> n;
        print2(n);
    
    return 0;
}