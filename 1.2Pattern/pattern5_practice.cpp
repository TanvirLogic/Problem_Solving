#include<bits/stdc++.h>
using namespace std;


    void print5(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=0;j<((2*n)-1-2*i);j++){
                cout<<"*";
            }
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }




int main(){

    int n;
    cin>>n;
    print5(n);



    return 0;
}