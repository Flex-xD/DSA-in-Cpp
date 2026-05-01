#include <bits/stdc++.h>
using namespace std;


int exoloreVector()
{
    // ? This line generates a empty container;
    vector<int> v;

    // ? This line pushes 1 from the back
    v.push_back(1);

    // ? This line pushes 2 from the back after 1 is pushed (emplace_back is faster than push_back);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    // * we have to use curly braces for push_back in order to push elements but not in emplace_back;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    // ? This creates a container of space 5 with any garbage value or 0's;
    vector<int> v(5);

    // ? This creates a container with 5 instances of 100;
    vector<int> v(5, 100);

    // * Copying a vector
    vector<int> v1(5, 20);
    vector<int> v2(v1);

    // * An iterator in C++ STL is an object that acts like a generalized pointer, allowing you to traverse and access elements within a container. Here below vecIt is a varibale that now stores the address of the vector v (not the value but the memory address of the first element of v)
    // ? begin() is a iterator
    vector<int>::iterator vecIt = v.begin();
    // ? Iterating a element ahead
    vecIt++;
    // ? if we put * before the address of an element then we get the actual element in c++
    cout << *(vecIt) << " ";

    vecIt = vecIt + 2;
    cout << *(vecIt) << " ";

    // ? Suppose we have a vector {10 , 20 , 30 , 40}
    vector<int>::iterator vecOne = v.end();
    // ? by using .end() we will get the space after 40 not 40 but location after 40 and doing vecOne-- will give use location of 40;

    // * vector<int>::iterator vecTwo = v.rend();
    // ? same as v.end() but reversed, we can access 10 by vecTwo++

    // * vector<int>::iterator vecThree = vec.rbegin();
    // ? same as v.begin() but reversed we will get the memory location of 40 and by adding one we get 30

    cout << v[0] << " " << v.at(0);
    cout << v.back() << "";
    // ? .back() is used to access the last element of the container and .at() is used to access the element at specified index

    // ? For accessing all the elements of a vecotor we use for loop

    for (vector<int>::iterator vecBeginning = v.begin(); vecBeginning != v.end(); vecBeginning++){
        cout << *(vecBeginning) << " ";
    }

    // ? in stl we use auto to automatically deduce the data type, explicitly it can be used in place of  vector<int>::iterator

    for (auto vecBeginning = v.begin(); vecBeginning != v.end(); vecBeginning++){
        cout << *(vecBeginning) << " ";}

    for (auto it : v){
        cout << it << " ";}

    // ? suppose we have a vector {10 , 20 , 30 , 40}, now we have to delete 20 we can do it by the erase method by providing the element's iterator (memory's location)
    v.erase(v.begin() + 1);

    // ? suppose we have to remove 20 , 30 from the above vector, then we will provide the first element's memory address that has to be removed than the memory address after the last element that has to be removed. This will remove 20 and 30
    v.erase(v.begin() + 1, v.begin() + 3);

    // * Insert Function
    vector<int>v(2 , 100); // {100 , 100}

    v.insert(v.begin() + 1 , 3); // before {10 , 20 , 30, 40} after {10 , 3 , 20 ,30, 40}.Basically element inserted in the provided memory address before
    
    v.insert(v.begin() + 1, 2, 13); // before {10 , 20 , 30, 40} after {10 , 13 ,13 ,3 , 20 ,30, 40}. Basically the first parameter is the memory address , the second one is the no. of elements and the third one is the element itself

    // ? For inserting a vector in another vector
    vector<int> copy (2 ,10);
    v.insert(v.begin() , copy.begin() , copy.end()); // This will insert the entire vecotr or just give the starting and one after ending address

    cout << v.size(); // prints the size of the vecotor, basically no. of elements
    
    v.pop_back(); // pops out the last element

    // v1 = {1 , 2}
    // v2 = {2 , 3}

    v1.swap(v2); // swaps the vector elements from each other or the name of the vectors

    v.clear(); // clears and entire vector no matter how big the size is 

    cout << v.empty(); // provided true if empty, and false even if there is a single element


}
