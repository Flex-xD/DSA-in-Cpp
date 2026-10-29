
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int arr[n];
    cout << "Before : ";
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0 ; i < n ; i++) {
        int didSwap  = 0 ;
        for (int j = 0 ; j < n - i ; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didSwap++;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }

    cout << "After  : ";
    for (int i = 1 ; i <= n ; i++) {
        cout <<  arr[i] << " ";
    }

    return 0;
}