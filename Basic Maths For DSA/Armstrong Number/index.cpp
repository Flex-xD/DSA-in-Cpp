#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int sum = 0;
    int dup = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    };
    if (sum == dup) cout << "Armstrong Number";
    else cout << "Not Armstrong Number";
    return 0;
}