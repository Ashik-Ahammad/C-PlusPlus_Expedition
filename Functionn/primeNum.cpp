#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    
    for (int i = 2; i<n; i++){
        if(n%i == 0){
            return 0; 
        }
    }
    return 1;
}


int main(){
    
    int n;
    cin>>n;
    
    if(isPrime(n)){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a prime Number"<<endl;
    }


    return 0;
}