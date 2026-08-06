#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    vector <int> ls;
    //  sqrt is a function here, so it will be executed everytime , so instead of it we will be calling i*i <= n
    // ? O(sqrt(n));
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n/i) != i) {
                ls.push_back((n/i));
            }
        }
    }
    // ? O(number of factors * log n) here n is the number of factors
    sort(ls.begin() , ls.end());

    // ? O(number of factors)
    for (auto it:ls) {
        cout << it << " ";
    }
    return 0;
}