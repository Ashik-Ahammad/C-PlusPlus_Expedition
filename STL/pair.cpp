#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, double> p={1, 5.3};
    cout<<p.first<<" "<<p.second<<endl;

    pair <int, pair<float, float>> p1={1, {2, 3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int ,string> arr[]={{1, "Tumi"}, {2, "Ami"}, {3, "ar"}, {4, "Danish"}};
    cout << arr[3].second << endl;

    return 0;    
}