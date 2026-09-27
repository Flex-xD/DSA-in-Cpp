
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int arr[n];
    cout << "Before : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }

    cout << "After  : ";
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}