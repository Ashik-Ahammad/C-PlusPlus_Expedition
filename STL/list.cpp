#include<bits/stdc++.h>
using namespace std;

void listFunc(){
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    ls.emplace_front(6);
}


int main(){
    int ls;
    cout<<"Enter the list: ";
    cin>>ls;
    cout<<ls<<endl;

    return 0; 
}