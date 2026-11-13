#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum (int arr[] , int n) {
    long long sum = 0  , maxi = LONG_MIN;
    int start , ansStart , ansEnd;
    for (int i = 0 ; i < n ; i++) {
        // ! if (sum == 0) start == i;
        sum += arr[i];
        
        if (sum > maxi) {
            maxi = sum;
            // ! ansStart = start , ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }
    // ? return empty array if maxi < 0
    if (maxi < 0) {
        return 0;
    }

    // ! return the ansStart and ansEnd for the pointers of maxSubArray
    return maxi;
}