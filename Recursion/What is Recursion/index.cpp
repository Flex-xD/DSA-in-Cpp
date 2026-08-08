#include <bits/stdc++.h>
using namespace std;

// ? This will keep on running till we are out of memory and this particular thing is called stack overflow 
void print() {
    cout << 1 << endl;
    print();
}

int main()
{
    freopen("input.txt", "r", stdin);
    print();
    return 0;
}