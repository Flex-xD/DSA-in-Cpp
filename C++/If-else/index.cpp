#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout << "Enter you age : ";
    cin >> age;
    if (age >= 18) {
        cout << "You are an Adult !";
        return 0;
    } 
    // else if (age < 18) {
    //     cout << "You are a minor";
    // };
    // ? Can also write simple else or not even else is necessary
    cout << "You are a minor";
    return 0;
}