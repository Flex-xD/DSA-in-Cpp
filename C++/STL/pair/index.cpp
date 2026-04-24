#include <bits/stdc++.h>
using namespace std;

int explorePair () {
    pair<int, int> p = {1, 2};
    cout << p.first << p.second;

    pair<int, pair<int, int>> s = {3, {2, 7}};
    cout << s.first << s.second.first << s.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 4}, {5, 7}};
    // ? I am not able access the element of array's element !
    cout << arr[2].second << arr[1].first;
}

int exoloreVector() {
    // ? This line generater a empty container;
    vector<int> v;

    // ? This line pushes 1 from the back
    v.push_back(1);

    // ? This line pushes 2 from the back after 1 is pushed (emplace_back is faster than push_back);
    v.emplace_back(2);

    vector<pair<int , int>> vec;

    // * we have to use curly braces for push_back in order to push elements but not in emplace_back;
    vec.push_back({1 , 2}); 
    vec.emplace_back(3, 4);

    // ? This creates a container of space 5 with any garbage value or 0's;
    vector<int> v(5);

    // ? This creates a container of 5 instances of 100;
    vector <int>v (5 , 100);

    // * Copying a vector
    vector<int> v1 (5 , 20);
    vector <int> v2(v1);

    // * An iterator in C++ STL is an object that acts like a generalized pointer, allowing you to traverse and access elements within a container. Here below vecIt is a varibale that now stores the address of the vector v (not the value but the memory address of the first element of v)
    // ? begin() is a iterator
    vector<int>::iterator vecIt = v.begin();
    // ? Iterating a element ahead
    vecIt++;
    // ? if we put * before the address of an element then we get the actual element in c++
    cout << *(vecIt) << " ";

    vecIt = vecIt + 2;
    cout << *(vecIt) << " ";
}
