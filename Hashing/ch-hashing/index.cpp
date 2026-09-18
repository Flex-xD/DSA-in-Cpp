
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    string n;
    cin >> n;
    
    // ? It's last index should be of the largest query
    int hash[26] = {0};

    for (int i = 0 ; i < n.size() ; i++) {
        hash[n[i] - 'a'] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        char ch;
        cin >> ch;
        cout  << ch << " : " << hash[ch - 'a'] << endl;
    }
    return 0;
}