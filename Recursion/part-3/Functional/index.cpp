#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n < 1) {
        return 0;
    }
    return n + sum (n-1);
}

int main () {
    int n ;
    freopen("input.txt", "r", stdin);
    cin >> n;
    int total = sum(n);
    cout << "This is the SUM : " << total;
    return 0;
}