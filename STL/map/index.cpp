#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int, int> mpp;
    map<int , pair<int , int>> mpp;
    map<pair<int , int> , int> mpp;

    mpp[1] = 2; // stores 2 at the key 1 (keys are unique) [ {1 , 2} ]
    mpp.insert({3 , 1}); // stores 1 at the 3rd key [ { 1 , 2} , {2 , 3}]
    mpp.emplace(2 , 2); // stores 2 at the 2nd key [ { 1 , 2} , {2 , 3} , {3 , 2}];

    // mpp[{2 , 3}] = 10; storex [ { {2 , 3}  , 3}]

    for (auto it:mpp) {
        cout << it.first << it.second << endl;
    };

    cout << mpp[1];
    cout << mpp[5];

    // finds the 3rd key's memory address
    auto it = mpp.find(3);
    // cout << *(it).second this prints the value of the key;

    auto it = mpp.find(5);
    // if the 5th key is not present , it will give the mpp.end() , the memory address after the last element

    // this is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase , swap , size , empty are same as below
}