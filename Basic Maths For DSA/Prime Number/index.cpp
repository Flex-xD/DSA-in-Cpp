#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ? add the edge case handling
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i) cnt++;
        }
    }
    cout << cnt << endl;
    if (cnt == 2) cout << "Prime number";
    else cout << "Not Prime Number";
    return 0;
}