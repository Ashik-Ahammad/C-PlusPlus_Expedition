#include<bits/stdc++.h>
using namespace std;

void funcVector(){
    vector<int> v;
    
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);


}

int main(){
    int v;
    cout<<"Enter the size of the vector: ";
    cin>>v;

    return 0; 
}