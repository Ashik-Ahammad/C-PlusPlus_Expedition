#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i = 2; i<n; i++){
        
        if(n%i == 0){
            cout<<"Not a Prime Number"<<endl;
            break;
        }
        else{
            cout<<"Prime Number";
            break;
        }
    }
}