#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findMissingNum(vector <int> &a1 , int n) {
    int sum = n * (n + 1)/2;
    int s1 = 0;
    for (int i = 0 ; i < n ; i++) {
        s1 += a1[i];
    }

    return (sum - s1);
}

int main() {
    return 0;
}