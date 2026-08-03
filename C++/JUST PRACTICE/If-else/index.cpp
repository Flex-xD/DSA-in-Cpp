#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are a adult !" << endl;
    }
    else if (age >= 13)
    {
        cout << "You are a teenager" << endl;
    }
    cout << "You are a minor";
    return 0;
}