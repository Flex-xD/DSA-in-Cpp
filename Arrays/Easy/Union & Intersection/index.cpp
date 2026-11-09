#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void UnionOfTwoArr(vector <int> &a1 , vector <int> &a2) {
    int n1 = a1.size();
    int n2 = a2.size();

    set <int> st;

    for (int i = 0 ; i < n1 ; i++) {
        st.insert(a1[i]);
    }

    for (int i = 0 ; i < n2 ; i++) {
        st.insert(a2[i]);
    }

    vector <int> temp;
    for (auto it:st) {
        temp.push_back(it);
    }

    // ? Return temp
}

int main() {
    return 0;
}