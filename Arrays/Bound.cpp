#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2; // to ignore the error of bigger value
    int ans = -1;

    while(start <= end){
        
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid+1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccur(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2; // to ignore the error of bigger value
    int ans = -1;

    while(start <= end){
        
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if(key > arr[mid]){
            start = mid+1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int arrray[11] = {1,2,3,3,3,3,3,3,3,3,5};

    int index = firstOccur(arrray, 11, 3);
    int index2 = lastOccur(arrray, 11, 3);

    cout<<"First occurence of 3 is at Index: "<< index << endl;
    cout<<"Last occurence of 3 is at Index: "<< index2 << endl;

    return 0;
}