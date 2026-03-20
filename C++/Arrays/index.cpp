#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // int arr[5];
    // cout << "Enter the array elements : ";
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[4];

    int arr[3][5];
    // ? The above array is a 2D one and element are determined by row & colums (same as a matrix)
    arr[1][3] = 89;
    // cin >> arr[1][3];
    cout << arr[1][3];
    return 0;
}