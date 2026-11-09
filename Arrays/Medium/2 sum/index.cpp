#include <bits/stdc++.h>
using namespace std;

string findTwoSum (vector <int> a , int k) {
    // int n = a.size();
    // map <int , int> mpp;
    // for (int i = 0 ; i < n ; i++) {
    //     int rem = k - a[i];
    //     if (mpp.find(rem) != mpp.end()) {
    //         return "YES";
    //     }
    //     mpp[a[i]] = i;
    // }
    // return "NO";
    int n = a.size();
    int left = 0;
    int right = n - 1;
    while (left < right) {
        sort(a.begin() , a.end());
        int sum = a[left] + a[right];
        if (sum == k) {
            return "YES";
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }
    return "NO";
}