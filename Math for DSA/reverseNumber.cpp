#include<bits/stdc++.h>
using namespace std;

// The number of digits in an integer n is roughly equal to log10(n). Therefore, the time complexity of the algorithm is O(log n).

void reverseNumber(int n) {

    int revNum = 0;
    int lastDigit;

    while (n > 0) {
        lastDigit = n % 10;
        n = n / 10;

        // Check for overflow before updating revNum
        if (revNum > (INT_MAX - lastDigit) / 10) { 
            cout << "Overflow occurred!" << endl;
            return; // Exit the function if overflow happens
        }

        revNum = (revNum * 10) + lastDigit;
    }

    cout << "Digits: " << revNum << endl; 
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

    reverseNumber(n);

    return 0;
}