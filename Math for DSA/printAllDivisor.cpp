#include<bits/stdc++.h>
using namespace std;

void printAllDivisor(int n) {  
    
    // Time complexity: O(n) 

    int temp = n;
    int sum = 0;
    for (int i=1; i<=n; i++) {
        if(n%i == 0){
            cout<<i<<" ";
        }
    }
    cout << endl; // Print a newline for better readability
    
}

void printDivisors(int n) {

    // Time complexity: O(sqrt(n)) {Better version}

    vector<int> ls;
    // 6 * 6 <= 36

    // 7 * 7 <= 36 false

    // O(sqrt(n))
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ls.push_back(i);
            if ((n / i) != i) {
                ls.push_back(n / i);
            }
        }
    }

    // O(no of factors * log(no of factors)): n is the number of factors
    sort(ls.begin(), ls.end());

    // O(number of factors)
    for (auto it : ls) cout << it << " ";
}

int main(){

    cout<<"Enter a number: ";
    int n;
    cin>>n;

    //printAllDivisor(n);
    printDivisors(n);

    return 0;
}