#include <bits/stdc++.h>
using namespace std;

int main ( ) {
    int n;
    bool isSorted = false;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    for (int i = 0 ; i < n - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            isSorted = true;
        } else {
            isSorted = false;
            break;
        }
    }

    if (isSorted) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}