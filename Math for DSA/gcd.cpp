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

void gcdOptimized(int a, int b) {
    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }
        else{
            b = b % a;
        }   
    }
    if(a==0) cout<<"GCD is: "<<b<<endl;
    else cout<<"GCD is: "<<a<<endl;
} 

int main(){

    cout<<"Enter two numbers: ";
    int n1, n2;
    cin>>n1>>n2;

    //gcdFunc(n1, n2);
    gcdOptimized(n1, n2);

    return 0;
}