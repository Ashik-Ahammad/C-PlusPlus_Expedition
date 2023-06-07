#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a decimal value: ";
    cin>>n;

    int ans = 0;
    int i = 0;
    while(n!=0){
        
        int bit = n & 1; //getting bit

        ans = (bit * pow(10, i)) + ans; //convertion law

        n = n>>1;
        i++;

    }

    cout<<"Answer is -> "<< ans << endl;

}