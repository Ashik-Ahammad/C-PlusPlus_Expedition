//Subtract the Product and Sum of Digits of an Integer

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    // to get the last digit, need module n%10 the number  - to get the rest of the number divide n/10 

    int product_of_digits = 1;
    int sum_of_digits = 0;

    while(n!=0){
        
        int rem = n%10;
        product_of_digits = product_of_digits * rem;
        sum_of_digits = sum_of_digits + rem;

        n = n/10;

    }

    int result = product_of_digits - sum_of_digits;
    cout<<"Result : "<<result<<endl;
}