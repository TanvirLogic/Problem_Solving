#include <bits/stdc++.h>
using namespace std;

void print1(int n) {
    for(int i = 1; i <=n; i++) {
        for(int j = 1; j <=i; j++) {
            cout << j<<" ";
        }
        cout << endl; // Moved inside the outer loop
    }
}

int main() {
    
        int n;
        cin >> n;
        print1(n);
    
    return 0;
}