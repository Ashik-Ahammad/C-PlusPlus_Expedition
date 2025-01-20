
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int n, int arr[]) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter values of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(n, arr);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}