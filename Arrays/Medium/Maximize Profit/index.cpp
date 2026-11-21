#include <bits/stdc++.h>
using namespace std;

int maximumProfit (int arr[] , int n) {
    int mini = arr[0] , profit = 0;
    for (int i = 1; i < n ; i++) {
        int cost = arr[i] - mini;
        profit = max(profit , cost);
        mini = min(mini , arr[i]);
    }
    return profit;
}