
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    
    // ? It's last index should be of the largest query
    int hash[13] = {0};

    for (int i = 0 ; i < n ; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout  << number << " : " << hash[number] << endl;
    }
    return 0;
}