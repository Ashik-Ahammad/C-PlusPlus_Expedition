#include<iostream>
using namespace std;

void printingArray(int arr[],int size){
    cout<<"Printing the array: "<<endl;
    for(int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }
    

}

int main() {

    int number[15];
    cout<<number[1] <<endl <<"Ëverything is wow"<<endl;

    int n = 15;
    int thirdArr[15]={2,7};

    printingArray(thirdArr, n);


    return 0;
}