#include<bits/stdc++.h>
using namespace std;

// TC: O(n) and SC: O(n)

void func(int i, int n){
    if(i>n){
        return;
    }
    cout<<"Ashik"<<endl;
    func(i+1, n);
}

int main(){
    int n;
    cin>>n;
    func(1, n);
}