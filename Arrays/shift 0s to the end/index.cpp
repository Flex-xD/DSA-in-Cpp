#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void shiftZerosToEnd(int arr[], int n) {
    // vector <int> temp;
    // for (int i = 0 ; i < n ; i++) {
    //     if (arr[i] != 0) {
    //         temp.push_back(arr[i]);
    //     }
    // }

    // for (int i = 0 ; i < temp.size() ; i++) {
    //     arr[i] = temp[i];
    // }

    // for (int i = temp.size() ; i < n ; i++) {
    //     arr[i] = 0;
    // }

    // ? Optimal solution
    int j = -1;
    for (int i = 0 ; i < n ; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }

    for (int i = j + 1 ; i < n ; i++) {
        if (arr[i] != 0) {
            swap(arr[j] , arr[i]);
            j++;
        }
    }

}

int main() {
    int n, d;
    cin >> n;
    vector<int> arr(n);

    cout << "Before : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    shiftZerosToEnd(arr.data(), n);

    cout << "After : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}