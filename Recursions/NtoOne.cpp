#include<bits/stdc++.h>
using namespace std;

// TC: O(n) and SC: O(n)

void printFunc(int n){
    if(n<1){
        return ;
    }
    cout<<n<<endl;
    printFunc(n-1);
}

int main(){
    int n;
    cin>>n;
    printFunc(n);

    return 0;
}