#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // int , long , long long , float , double

    int x;
    cin >> x;
    return 0;

    long y;
    cout << "Enter the value of y : " << y; 
    cin >> y;

    long long forLongerNum;
    cout << "Enter the value of forLongerNum" << endl;

    // ? The above ones are mainly for integers;
    
    // * Now comes the double and float for values with the decimal point , there is float and double

    float DecimalPointNum;
    cout << "Enter the value of DecimalPointNum" << endl;
    cin >> DecimalPointNum;

    double biggerDecimalPointNum;
    cout << "Enter the value of biggerDecimalPointNum" << endl;
    cin >> biggerDecimalPointNum;
}

int otherFunctionTypes () {
    
    // string ,getline and char

    string name;
    cout << "Enter your name : " << endl;
    cin >> name;
    cout << "Your name is : " << name << endl;
    return 0;

    string str;
    // ? This get line will print the whole line without me having to define the number of string varibales
    getline(cin , str);
    cout << str << endl;

    char ch;
    char ch1 = 'f';
    cout << "This is ch1" << ch1 << endl;
    // ? If it is a single word then we use ch rather than string because, string takes a lot more space then ch; 
    // ? also a string is enclosed in "" and ch is in ''; 

}