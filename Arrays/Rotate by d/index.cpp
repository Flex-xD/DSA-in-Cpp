#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void rotateArrayByd(int arr[], int n, int d) {
    if (n <= 0) return;

    d = d % n;
    if (d == 0) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    vector<int> temp(arr, arr + d);

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    // ? More optimal approach , takes S.C of O(1);
    // reverse(arr , arr + d);
    // reverse(arr + d , arr + n);
    // reverse(arr  , arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);

    cout << "Before : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    rotateArrayByd(arr.data(), n, d);

    cout << "After : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}