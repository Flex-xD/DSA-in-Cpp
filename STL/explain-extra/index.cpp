#include <bits/stdc++.h>
using namespace std;

void explainExtra()
{
    // ? Suppose we have a array like {2 , 4 ,6 ,5 }
    // ? We can sort it by
    // sort(a , a+n);
    // ? where a is the iterator of the first element and a+n is that of the iterator after the last element

    // ? This one is for vectors
    // sort(v.begin() , v.end());

    // ? and if we only want to sort some portion of the array then remember [start , end);
    // sort(a+2 , a+arr.length());
    // this will sort above array like { 2 , 3 , 5 , 6} only 5 and 6 are being sorted 

    // ? If you want to sort it in descending order then
    // sort(a , a+n , greater<int>);

    // ? Image here we have a array like 
    pair <int , int> a[] = { {1 , 2 } , {2 , 1 } , {1 , 4 }};
    // * now  I have to sort it in ascending order of the second element
    // * If second element is same then
    // * sort it in order of descending order 
    // sort (a , a+n , comp)
}

bool comp (pair<int , int> p1 , pair<int , int> p2) {
    if (p1.second > p2.second) return true;
    if (p1.second < p2.second) return false;
    // ? I they are same 
    if (p1.first > p2.second) return true;
    return false;
}
