#include <bits/stdc++.h>
using namespace std;


void print(int n , int i) {
    if (n < 1) {
        return;
    }
    print(n-1 , i);
    cout << n << endl;
}

int main()
{
    int n , i;
    freopen("input.txt", "r", stdin);
    cin >> n >> i;
    cout << "This is the value of n : " << n << endl;
    cout << "This is the value of i : " << i << endl;
    print(n , n);
    return 0;
}