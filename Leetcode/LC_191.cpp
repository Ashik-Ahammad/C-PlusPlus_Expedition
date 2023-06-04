#include<iostream>
using namespace std;

int main(){

    uint32_t n;
    cin>>n;
    
    int count = 0;

    while(n!=0){

        // checking last bit if there is any 1 by doing & operation with last bit
        if(n&1){
            count++;
        }

            n = n >> 1; //doing right shift
    }

    cout<<count;

}