#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<< "* ";
        }
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