#include <bits/stdc++.h>
using namespace std;

void explainList() {
    // ? A list is a data structure in C++ stl , that stores element in seperate , non-contagious memory blocks  called nodes , linked together by pointer
    // ? The main difference between a list and a vector lies in how they store data and how fast they perform specific tasks.  A vector is like a dynamic array where all elements are stored in a single, continuous block of memory.  This makes vectors extremely fast for reading or accessing elements by their index (e.g., getting the 10th item instantly), but slow for inserting or deleting items in the middle because all subsequent items must be shifted over. In contrast, a list is slow for random access but excels at inserting or deleting elements anywhere in the sequence, as it only requires changing a few pointers. 
    list<int> ls;
    ls.push_back(20);
    ls.emplace_back(30);

    ls.push_front(1); // pushes from front

    ls.emplace_front(0);

    // rest functions are same as vector
    // begin , end , rbegin , rend ,clear , insert , size ,swap

}