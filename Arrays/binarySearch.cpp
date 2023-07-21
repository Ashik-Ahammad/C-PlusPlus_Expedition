#include<iostream>
using namespace std;

int firstOccur(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2; // to ignore the error of bigger value

    while(start <= end){
        
        if(arr[mid] == key){
            return mid;
        }

        else if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index = firstOccur(even, 6, 18);
    cout<<"Index of the value is: "<< index << endl;

    return 0;
}