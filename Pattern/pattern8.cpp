#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<<"  ";
        };

        //stars
        for(int j=0; j<(2*n-(2*i+1)); j++){
            cout<<"* ";
        };

        //spaces
        for(int j=0; j<i; j++){
            cout<<"  ";
        };
        
        cout<<endl;
    }
}

int main(){
    cout << "Enter the number of rows: ";
    int n;
    cin >> n;
    printPattern(n);

    return 0;
}