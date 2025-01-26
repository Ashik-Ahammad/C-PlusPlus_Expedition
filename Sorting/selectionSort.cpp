#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }

        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int n;
    
    cout << "Enter Array Size: ";
    cin >> n;

    // Validate input size
    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    vector<int> arr(n);  

    cout << "Enter Array values: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr);

    cout << "Selection-Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Space Complexity:  O(1)
// Time Complexity: O(n^2)