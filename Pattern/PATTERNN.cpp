#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;

    while(i<=n){

        // print tiangle of space 1st
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        // print 2nd triangle
        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }


        // print 3rd triangle
        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        i++;
    }
    



}

/*
Output:

 input:4

   1
  121
 12321
1234321

*/