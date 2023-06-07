#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter value of a & b: ";
    cin>>a>>b;
    
    char op;
    cout<<"Enter an operator (+-*/) : "<<endl;
    cin>>op;

    switch(op){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
    }
}