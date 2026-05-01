#include <bits/stdc++.h>
using namespace std;

void explainStack () {
    queue <int> qu;
    // ? remember FIFO (first in , first out);

    qu.push(1); // { 1 }
    qu.emplace(2); // {1 , 2}
    qu.push(5); // {1 ,2 , 5}

    qu.back() += 4; // 5 will become 9
    cout << qu.back(); // print 9

    cout << qu.front(); // prints 1

    qu.pop(); // removes 1

    // size , swap same as stack

}