#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    int max = 0;
    int cnt = 0;
    for (int i = 0 ; i < n - 1 ; i++) {
        if (arr[i] == 1 && arr[i + 1]) {
                cnt = cnt + 1;
                if (cnt >= max) {
                    max =  cnt;
                }
        } 
    }
    cout << "Max : " << max;
    return 0;
}