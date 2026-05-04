#include <bits/stdc++.h>
using namespace std;

void explainMultiSet() {
    multiset<int> ms;
    // same as set , elements are sorted 
    // but there is no uniqueness (duplicates are allowed)

    ms.insert(1); // { 1 }
    ms.insert(1); // { 1 ,  1}
    ms.insert(1); // { 1 ,  1 , 1}

    ms.erase(1); // erases all the occurences

    ms.erase(ms.find(1)); // erase only a single 1 , as we are now passing the memory address of a single 1

    ms.count(1); // gives the number of occurences of the 1

    // ms.erase(ms.find(1) , ms.find(1) + 2);

    // ? rest are same as set
}