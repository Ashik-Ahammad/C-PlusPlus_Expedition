#include<bits/stdc++.h>
using namespace std;

//TC: O(n) and SC: O(n)

void printFunc(int i, int n){
    if(i<1){
        return ;
    }
    printFunc(i-1, n);
    cout<<i<<endl;
    
}

int main(){
    int n;
    cin>>n;
    printFunc(n, n);

    return 0;
}