#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector <int> intersectionOfTwoArr(vector <int> &a1 , vector <int> &a2) {
    int n1 = a1.size();
    int n2 = a2.size();
    vector <int> intersection;
    vector <int> visited = {0};
    for (int i = 0 ; i < n1 ; i++) {
        for (int j = 0 ; j < n2 ; j++) {
            if (a1[i] == a2[j] && visited[j] == 0) {
                intersection.push_back({a1[i]});
                visited[j] = 1;
                break;
            } 

            if (a1[i] < a2[j]) {
                break;
            }
        }
    }
    return intersection;
}


// ? This one is optimized
vector <int> intersectionOfTwoArr(vector <int> &A , int n ,  vector <int> &B , int m) {
    int i = 0;
    int j = 0;
    vector <int> intersection;
    while (i < n && j < m) {
        if (A[i] < B[j]) {
            i++;
        } else if (A[i] > B[j]) {
            j++;
        } else {
            intersection.push_back({A[i]});
            i++;
            j++;
        }
    }
    return intersection;
}
