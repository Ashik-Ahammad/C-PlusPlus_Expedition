#include<bits/stdc++.h>
using namespace std;

// TC= O(log n) 

int firstOccurrence(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }

        //go to right part
        if (key > arr[mid]) {
            start = mid + 1;
        } 
        else if(key < arr[mid]) { 
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

int lastOccurrence(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }

        //go to right part
        if (key > arr[mid]) {
            start = mid + 1;
        } 
        else if(key < arr[mid]) { 
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}


int main() {
    
    int arr[5] = {1, 2, 3, 3, 5};
    

    int firstOccIndex = firstOccurrence(arr, 5, 3);
    cout << "First occurrence of 3 is at index " << firstOccIndex <<endl; 

    int lastOccIndex = lastOccurrence(arr, 5, 3);
    cout << "Last occurrence of 3 is at index " << lastOccIndex <<endl; 


    return 0;

}