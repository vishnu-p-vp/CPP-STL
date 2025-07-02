// Priority queues are like queues, but elements inside the queue are ordered by some predicate
// #include<queue> contains queue, priority queue and double ended queue
// priority queue -> by default larger element first
// No iterators on priority queue (because it is implemented using a heap structure

// only certain functionalities
// --- push(), pop() ---> can't insert in middle
// we can see only one element in the front using --> top() --> otherwise pop() & push() again
// empty(), swap() --> while( !pq.empty() ) { cout<<pq.top(); pq.pop(); }
// size()

// ----------------------------------------------------------------------
// Comparator -> if we want to change the default order i.e., descending order(larger elements first) priority
// along with the comparator we have to give the container also 
// if no comparator, by default vector container is used -> priority queue is "container adapter" (adapts the underlying container)
// The comparator is used during heap operations, it's about maintaining the heap structure, which is not a regular linear queue.

// Example 1 for comparator:
// -------priority_queue<int, vector<int>, greater<int>> pq2; ------------
//          int           ->   data type 
//          vector<int>   ->   container which contains above data type
//          greater<int>  ->   class comparator (we should pass class in which operator is overloaded)
//                             greater is a class template
// We should give class template only here

// std::priority_queue puts the largest element at the top by default, because it's a max-heap by default.
// When you pass greater<int>, you're actually reversing the comparison logic, creating a min-heap, so the smallest element appears at the top.
// swaps if true  (reverse)


#include<queue>
#include<iostream>

using namespace std;


class Compare
{
    public: bool operator() (int a, int b)
    {
        return (a>b);
    }
};

int main()
{
    priority_queue<int> pq;
    pq.push(0);
    pq.push(1);
    pq.push(2);
    while( !pq.empty() )
    {
        cout<<pq.top()<<'\t'; 
        pq.pop(); 
    }

    //--------------------Example 1 for comparator:---------------------------
    cout<<"\n With Comparator example 1: \n";
    priority_queue<int, vector<int>, greater<int>> pq2; // swaps if true (reverse)
    // You don’t need to include <vector> explicitly because <queue> internally includes <vector>.
    // <queue> defines the std::priority_queue class template, and since priority_queue uses std::vector as its default underlying container, the implementation of <queue> must internally include <vector>.
    pq2.push(0);
    pq2.push(1);
    pq2.push(2);
    while( !pq2.empty() )
    {
        cout<<pq2.top()<<'\t'; 
        pq2.pop(); 
    }

    //--------------------Example 2 for comparator(Creating Comparator class explicitly):---------------------------
    cout<<"\n Example 2 for comparator(Creating Comparator class explicitly): \n";
    priority_queue<int, vector<int>, Compare> pq3; // swaps if true (reverse)
    pq3.push(0);
    pq3.push(1);
    pq3.push(2);
    while( !pq3.empty() )
    {
        cout<<pq3.top()<<'\t'; 
        pq3.pop(); 
    }

    return 0;
}
