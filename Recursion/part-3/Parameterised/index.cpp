#include <bits/stdc++.h>
using namespace std;

void sum(int n, int total)
{
    if (n == 0)
    {
        cout << total;
        return;
    }
    sum(n - 1, total + n);
}

// ? I can find the factorial of n using * instead of + , and also changing total to 1 in the starting instead of 0

int main()
{
    int n;
    freopen("input.txt", "r", stdin);
    cin >> n;
    sum(n, 0);
    return 0;
}