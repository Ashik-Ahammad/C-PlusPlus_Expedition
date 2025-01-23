#include<bits/stdc++.h>
using namespace std;

// TC= O(log n) 

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right part
        if (key > arr[mid]) {
            start = mid + 1;
        } 
        else { //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
}

int main() {
    
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 7, 11, 13, 17};

    int evenIndex = binarySearch(even, 6, 18);
    cout << "Even " << evenIndex <<endl;

    int oddIndex = binarySearch(odd, 5, 13);
    cout << "Odd " << oddIndex <<endl;

    return 0;

}