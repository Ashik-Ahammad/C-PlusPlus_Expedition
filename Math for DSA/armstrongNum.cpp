#include<bits/stdc++.h>
using namespace std;

void armstrongNum(int n) {  
    
    // Time complexity: O(log(n)) 

    int temp = n;
    int sum = 0;
    while (n > 0) {
        int lastDigit = n % 10; 
        n = n / 10; 
        sum = sum + (lastDigit * lastDigit * lastDigit);
    }
    cout << endl; // Print a newline for better readability
    if (sum == temp) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }
}

int main(){

    cout<<"Enter a number: ";
    int n;
    cin>>n;

    armstrongNum(n);

    return 0;
}