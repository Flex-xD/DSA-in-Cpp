#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ? add the edge case handling
    freopen("input.txt", "r", stdin);
    int n1 , n2;
    cin >> n1 >> n2;

    if (n1 == 0) return n2;
    if (n2 == 0) return n1;

    while (n1 != 0) {
        int temp = n1;
        n1 = n1 % n2;
        n2 = temp;
    }
    cout << n2;
    return 0;
}