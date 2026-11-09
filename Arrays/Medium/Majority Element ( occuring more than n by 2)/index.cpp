#include <bits/stdc++.h>
using namespace std;

int majorityElement (vector <int> &a , int n) {
    int ele;
    int cnt = 0;
    for (int i = 0 ;i < n ; i++) {
        if (cnt == 0) {
            cnt = 1;
            ele = a[i];
        } else if (a[i] == ele) {
            cnt++;
        } else {
            cnt--;
        }
    }
    int count;
    for (int i = 0 ; i < n ; i++) {
        if (a[i] == ele) {
            count ++;
        }
    }

    if (count > n/2) {
        return ele;
    }
    return -1;
}