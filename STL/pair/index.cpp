#include <bits/stdc++.h>
using namespace std;

int explorePair()
{
    pair<int, int> p = {1, 2};
    cout << p.first << p.second;

    pair<int, pair<int, int>> s = {3, {2, 7}};
    cout << s.first << s.second.first << s.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 4}, {5, 7}};
    // ? I am not able access the element of array's element !
    cout << arr[2].second << arr[1].first;
}
