#include <bits/stdc++.h>
using namespace std;

int addFive3times (int &num) {
    // ? Here we are passing the real value of num and the modification applied to it will be seen on the original num, this is called pass by refrence
    num += 5;
    num += 5;
    int newNum = num +=5;
    return newNum;

}

int main() {
    int num;
    cout << "Enter your number : ";
    cin >> num;
    // ? We are passing the original value of num here in the addFive3times and in this function we use & opertor attached to the parameter for making it pass by refrence
    int newNum = addFive3times(num);
    cout << newNum << endl;
    cout << num;
    return 0;
}