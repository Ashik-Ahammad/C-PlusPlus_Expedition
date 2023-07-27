#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1; i<n; i++){

        bool swapped = false;
        for(int j=0; j<n-i; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;

            }
        }
        if(swapped == false)
            break;
    }
}
// coding ninja
/*
Bubble Sort is a stable sorting algorithm. We swap elements only when A is less than B. If A is equal to B, we do not swap them, hence relative order between equal elements will be maintained.
*/