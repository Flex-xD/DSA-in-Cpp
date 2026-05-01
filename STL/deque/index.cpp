#include <bits/stdc++.h>
using namespace std;

void explainDeque() {
    // ? std::deque (double-ended queue): Stores elements in chunks of contiguous memory.  It combines the benefits of both, allowing fast random access (like a vector) and fast insertion/deletion at both the front and back (unlike a vector, which is only fast at the back).  It is ideal for scenarios like queues or sliding windows where you add and remove items from both ends frequently.

    deque <int> dq;
    dq.push_back(1);
    dq.push_front(0);

    dq.emplace_back(10);
    dq.emplace_front(23);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    // rest functions same as vector 
    // begin , end , rbeign , rend , clear , insert , swap , size 
}