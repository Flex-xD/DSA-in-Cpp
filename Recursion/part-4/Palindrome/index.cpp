#include <bits/stdc++.h>
using namespace std;

void checkPalindrome(int i , string &n , int len)
{
    
    if (i >= len) {
        cout << "true";
        return;
    };
    if (n[i] != n[len-i-1]) {
        cout << "false";
        return;
    }
    checkPalindrome(i + 1 , n , len);
}

int main()
{
    string n;
    freopen("input.txt", "r", stdin);
    cin >> n;
    cout << n << endl;
    checkPalindrome(0, n, n.size());
    return 0;
}