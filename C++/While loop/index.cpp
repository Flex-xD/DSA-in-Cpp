#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 1;
    // ? When using do , it dosen't matter what if the condition in the loop parameter is false it will execute the code atleast one time 
    do {
        cout << "Value of i is " << i << endl;
        i += 1;
    } while (i>=5);
    cout << i;

    return 0;
}