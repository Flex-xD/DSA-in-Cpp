#include <bits/stdc++.h>
using namespace std;

void explainStack () {
    stack <int> st;
    // ? Remeber LIFO (last in , first out)

    st.push(1); // {1}
    st.emplace(2); // {2 , 1}
    st.push(3); // {3 , 2 , 1}
    st.push(4); // {4 , 3  , 2 ,1}

    st.top(); // ? prints 4 , indexing is not allowed ** st[3] will be invalid **
    st.pop(); // {3 , 2 ,1}; removes the upmost element

    st.empty(); // ? shows false as st is not empty
    stack<int> st1;

    st.swap(st1);
}