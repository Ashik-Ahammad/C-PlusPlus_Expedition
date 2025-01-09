#include<bits/stdc++.h>
using namespace std;

void digitExtraction(int n) {

    // Time complexity: O(log(n))

    while (n > 0) {
        int lastDigit = n % 10; 
        cout << lastDigit << " "; // Print the extracted digit
        n = n / 10; 
    }
    cout << endl; // Print a newline for better readability
}

int main(){

    cout<<"Enter a number: ";
    int n;
    cin>>n;

    digitExtraction(n);

    return 0;
}