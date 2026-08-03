#include <iostream>
using namespace std;

int main()
{
    // ? This is one dimensional array
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    arr[3] += 7;
    cout << "This is the fourth array element : " << arr[3];

    // This is two dimensional array
    int arr2d[3][5];

    arr2d[1][3] = 92;

    cout << arr2d;
    // * This will print out 92 but if we try to print out other elements let's say like arr2d[0][3] then it will print any garbage value could be anything like 937593 , 393847 , 137948
}
