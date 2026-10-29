#include <bits/stdc++.h>
using namespace std;


void print(int n , int i) {
    if (i > n) {
        return;
    }
    cout << n << endl;
    print(n-1 , i);
}

int main()
{
    int n , i;
    freopen("input.txt", "r", stdin);
    cin >> n >> i;
    cout << "This is the value of n : " << n << endl;
    cout << "This is the value of i : " << i << endl;
    print(n , i);
    return 0;
}