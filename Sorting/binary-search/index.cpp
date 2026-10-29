#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int binary_search (int arr[] , int n , int num) {
    int low = 0;
    int high = n -1;
    int mid = (low + high) / 2;

    while (low <= mid) {
        if (num == mid) {
            return mid;
        } else if (num <= mid) {
            low = mid + 1;
            low ++;
        } else {
            high = mid;
            
        }
    }
}


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

    selection_sort(arr , n);


    return 0;
}