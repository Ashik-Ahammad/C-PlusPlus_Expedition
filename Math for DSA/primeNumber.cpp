#include<bits/stdc++.h>
using namespace std;

void primeNum(int n) {  
    
    // Time complexity: O(n)

    int count = 0;
    for (int i=1; i<=n; i++) {
        if(n%i == 0){
            count++;
        }
    }
    cout << endl; // Print a newline for better readability
    if(count == 2){
        cout<<"Prime number"<<endl;}
    else{
        cout<<"Not a prime number"<<endl;
    }
}

void primeNumOptimized(int n) {

    // Time complexity: O(sqrt(n))

    if (n <= 1) {
        cout << "Not a prime number" << endl;
        return;
    }
    if (n <= 3) {
        cout << "Prime number" << endl;
        return;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        cout << "Not a prime number" << endl;
        return;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            cout << "Not a prime number" << endl;
            return;
        }
    }
    cout << "Prime number" << endl;
}


int main(){

    cout<<"Enter a number: ";
    int n;
    cin>>n;

    //primeNum(n);
    primeNumOptimized(n);

    return 0;
}