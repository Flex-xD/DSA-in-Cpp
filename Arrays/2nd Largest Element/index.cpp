#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n)
{
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
        return sLargest;
    }
}

int findSecondSmallest(int arr[], int n)
{
    int smallest = arr[0];
    // ? Take the int max  , a very very large number
    int sSmallest = 9999;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < sSmallest)
        {
            sSmallest = arr[i];
        }
        return sSmallest;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sLargest = findSecondLargest(arr, n);
    int sSmallest = findSecondSmallest(arr, n);

    cout << sLargest;
    return 0;
}