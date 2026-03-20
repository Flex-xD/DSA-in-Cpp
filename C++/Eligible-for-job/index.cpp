#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// * Based on user's age telling him is he is eligible for job or not (if the age is between 55 and 57 then retirement soon , and after 57 it's retirement)
int main () {
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (age < 18) {
        cout << "You are not eligible for job"; 
    } else if (age <=57) {
        cout << "You are eligible for job";
        if (age >= 55) {
            cout << " , but retirement soon ! ";
        } 
    } else {
        cout << "Retirement soon !";
    }
    return 0;
}