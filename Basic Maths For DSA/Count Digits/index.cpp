#include <bits/stdc++.h>
using namespace std;


int main() {
    int n = 9092;;
    int count;
    while (n > 0) {
        count = count + 1;
        n / 10;
    };
    return count;
}