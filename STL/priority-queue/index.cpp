#include <bits/stdc++.h>
using namespace std;

void explainPriorityQueue () {
    priority_queue <int> pq;
    // ? The largest element stays at the top;
    // ? also known as max heap
    pq.push(1); // { 1 }
    pq.push(4); // { 4 , 1 }
    pq.emplace(3); // { 4 , 3 , 1 }
    pq.push(10); // { 10 , 4 , 3 , 1}

    cout << pq.top(); // ? print 10

    pq.pop(); // {4 , 3 , 1}

    // ? size , swap and empty functions same as other 

    // ? min heap (least value element above)
    priority_queue <int , vector<int> , greater<int>> pq;
    pq.push(12); // { 12 }
    pq.emplace(13); // { 12 , 13 }
    pq.push(3); // { 3 , 12 , 13}
    pq.push(2); // { 2 , 3 , 12 , 13}

    cout << pq.top(); // prints 2
}