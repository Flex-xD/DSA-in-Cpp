#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    
    int last = fibonacci(n-1);
    int sLast = fibonacci(n-2);
    return last + sLast;
}

int main()
{
    int n;
    freopen("input.txt", "r", stdin);
    cin >> n;
    int num = fibonacci(n);
    cout << "Fibonacci Num : " << num;
    return 0;
}