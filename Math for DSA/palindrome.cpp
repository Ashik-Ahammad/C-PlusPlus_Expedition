#include<bits/stdc++.h>
using namespace std;

void palindromeNum(int n) {  
    
    // Time complexity: O(log n)

    int newNum = 0;
    int duplicate = n;

    while (n > 0) {

        int lastDigit = n % 10; 
        n = n / 10;
        
        newNum = (newNum * 10) + lastDigit;
    }
    cout << endl;

    if(newNum == duplicate) {
        cout << "The number is a palindrome number." << endl;
    } else {
        cout << "The number is not a palindrome number." << endl;

    } 
}

int main(){

    cout<<"Enter a number: ";
    int n;
    cin>>n;

    palindromeNum(n);

    return 0;
}