#include <iostream>
using namespace std;

// Functions are pieces of code which performs something for us
// Functions are used to modularise our code 
// Functions are used to make our code more readable
// Functions are used to make our code reusable
// void ->
// return -> 
// parameterised ->
// parameterised ->

void printName (string name) {
    cout << "Hey , " << name << endl;
}

int sum (int num1  , int num2) {
    int num3 = num1 + num2;
    return num3;
}

int main () {
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);

    // ? Sum of 2 numbers
    int num1 , num2;
    cin >> num1 >> num2;
    int num3 = sum(num1 , num2);
    cout << num3;


    // maxx and min
    int minimum = min (num1 , num2);
    int maximum = max(num1 , num2);
    // ? I can also create these functions
    cout << "This is minimum : " << minimum << "This is maximum : " << maximum;
    return 0;

}
