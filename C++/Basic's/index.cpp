#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {
    // ! Data-Types below to solve problems
    // * int , long , long long , double , float
    // * str , getline , chr

    string name;
    cout << "Enter you name : ";
    // ? This get line is an internal function which is used to take whole strings as input
    getline(cin , name);
    cout << "So Your name is " << name << endl;
    int x , y;
    cout << "Enter the value of x : ";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;
    cout << "The value of x and y is : " << x << " and " << y;
    return 0;
} 