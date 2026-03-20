#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        // ? For space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // ? For stars
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        // ? For space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // ? For space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // ? For star
        for (int j = 0; j < n * 2 - 1 - (2 * i); j++)
        {
            cout << "*";
        }
        // ? For space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    printPattern1(n);
    return 0;
}