
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int arr[n];
    map<int , int> mpp;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        mpp[arr[i]] += 1;
    }
    
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        cout  << number << " : " << mpp[number] << endl;
    }
    return 0;
}