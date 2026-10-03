#include <bits/stdc++.h>
using namespace std;

int pivotFn(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {

        while (arr[i] <= arr[pivot] && i <= high - 1) {
            i ++;
        }

        while (arr[j] > arr[pivot] && j >= low + 1) {
            j--;
        }

        if (i < j) swap(arr[i] , arr[j]);
    }

    swap(arr[pivot] , arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = pivotFn(arr, low, high);
        qs(arr, low, pivot - 1);
        qs(arr, pivot + 1, high);
    }
}

int main()
{
    freopen("input.txt", "r", stdin);

    int n;
    cin >> n;
    int low = 0;
    int high = n - 1;
    vector<int> arr(n);

    cout << "Before : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }

    cout << endl;

    qs(arr, low, high);

    cout << "After : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}