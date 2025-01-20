#include<bits/stdc++.h>
using namespace std;


void printFunc(int i, int sum){
    if(i<1){
        cout<<"Sum of N: "<<sum<<endl;
        return ;
    }
    printFunc(i-1, sum+i);
    
}

int main(){
    int n;
    cin>>n;
    printFunc(n, 0);

    return 0;
}