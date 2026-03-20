#include <bits/stdc++.h>
using namespace std;

// ? Arrays are always passed by refrence in param's;
int main() {
    int arr[10];
    cout << "Enter array elements : ";
    for (int i = 1; i <= 10; i++) {
        cin >> arr[i];
        if (i==10) {
            for (int j = 1; j <= 10; j++) {
                cout << arr[j] << endl;
            }
        }
    }

    return 0;
}