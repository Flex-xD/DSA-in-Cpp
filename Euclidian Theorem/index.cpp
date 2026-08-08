#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ? add the edge case handling
    freopen("input.txt", "r", stdin);
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    int cnt = 0;
    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) n1 = n1 % n2;
        else n1 = n2 % n1;
        if (n1==0) return n2;
        return n2;
    }
    return 0;
}