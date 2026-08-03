#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << n;
    return 0;
}