#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for(int i=0; i<n; i++){
        
        for(char ch='E'-i; ch<='E'; ch++){
            cout<< ch <<"  ";
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