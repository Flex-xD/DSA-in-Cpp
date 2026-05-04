#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
    set<int> st;
    // ? A set is a conatiner that only stores unique elements and always in a sorted manner

    st.insert(1);  // ? {1}
    st.insert(2);  // ? {1 , 2}
    st.emplace(2); // ? {1 , 2} uniqueness is maintained
    st.insert(4);  // ? {1 ,2 ,4}
    st.insert(3);  // ? {1 ,2 ,3 ,4} every element is sorted

    // Functions of insert in vector
    // can be used also, that only increases efficiency

    // begin , end , rbeing , rend , size
    // empty() and swap() are same as above

    // * {1 , 2 ,3 ,4}
    auto it = st.find(3); // give the memory address of 3

    auto it = st.find(5); // always gives the st.end(); (memory address after the last element)

    st.erase(3); // remove the element and maintains the sorted order

    int cnt = st.count(1); // gives the 1 if the element is present and 0 if it does not

    // ? { 1 , 2 , 3 , 4 , 5};
    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2); // After erase it become {1  ,4 , 5} [first , last)

    // lower_bound and upper_bound function works in the similar way as it works in the vector

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}