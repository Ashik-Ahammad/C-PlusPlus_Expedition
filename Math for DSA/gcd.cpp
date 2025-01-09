#include<bits/stdc++.h>
using namespace std;

void gcdFunc(int n1, int n2) {  
    
    // Time complexity: O(min(n1, n2))
    int gcd=1;

    for(int i=1; i<=n1 && i<=n2; i++){
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    cout << endl; // Print a newline for better readability
    cout<<"GCD of "<<n1<<" and "<<n2<<" is: "<<gcd<<endl;
    
}

int main(){

    cout<<"Enter two numbers: ";
    int n1, n2;
    cin>>n1>>n2;

    gcdFunc(n1, n2);

    return 0;
}