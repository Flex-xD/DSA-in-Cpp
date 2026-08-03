#include <iostream>
using namespace std;

int main()
{
    string str = "batman";
    int len = str.size();
    str[len - 2] = 'e';
    cout << str[len - 2];
    return 0;
}
