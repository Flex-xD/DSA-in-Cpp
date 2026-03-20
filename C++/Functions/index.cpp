#include <bits/stdc++.h>
using namespace std;

void greetPerson (string name) {
    cout << "Good morning, " << name;
}

int main() {
    string name1;
    cout << "What's your name ? ";
    cin >> name1;
    greetPerson(name1);
    return 0;
}