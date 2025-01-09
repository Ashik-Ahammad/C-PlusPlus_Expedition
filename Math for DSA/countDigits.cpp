#include<bits/stdc++.h>
using namespace std;

void digitCount(int n) {  
    
    // Time complexity: O(log10(n)) because the division by 10 reduces the number of digits by 1 in each iteration

    int count = 0;

    while (n > 0) {

        int lastDigit = n % 10; 
        cout << lastDigit << " "; // Print the extracted digit
        n = n / 10;
        
        count = count + 1;
    }
    cout << endl; 
    cout << "Total Digits: "<< count << " "; // Print the count of digits
}

int main(){

    cout<<"Enter a number: ";
    int n;
    cin>>n;

    digitCount(n);

    return 0;
}