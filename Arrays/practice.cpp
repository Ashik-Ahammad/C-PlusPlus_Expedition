// We can initialize the array with any value by using the fill_n command 

#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 1);

    //To check the array input 
    for(int i = 50; i <= 95; i++){
        cout << array[i] << endl;
    }

}