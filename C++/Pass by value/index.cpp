#include <bits/stdc++.h>
using namespace std;

int addFive (int num) {
    // ? This is a pass by value because here we are using copy of the original num
    int newNum = num + 5;
    return newNum;

}

int main() {
    int num;
    cout << "Enter your number : ";
    cin >> num;
    // ? We are passing the copy down in the addFive function, so the changes are being made to that copy and not to the original value of num, so when print num we get's it original value that we had initialized it with; (This is called pass by value)
    int newNum = addFive(num);
    cout << newNum << endl;
    cout << num;
    return 0;
}