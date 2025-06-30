// Dequeue -> "deque" in STL

// Has iterators (upto Random access iterator) -> all generic algos which can be applied to vectors can be applied to deque as well
// Has all functionalities
// Has push_back(), pop_back(), push_front(), pop_front() ---> can be used as stack (push & pop from any one end), queue (push from one end & pop from other end), vector
// can acces elements using indexing[], .at()

// constructors are same as in vectors

// Capacity functions
// size(), max_size(), resize(), empty(), 
// shrink_to_fit() -> shrink to fit to a particular size (requests the container to reduce its capacity to fit its current size. This means it aims to deallocate any unused memory that the deque might be holding beyond what is necessary to store its current elements.)
//                 -> if we have created larger deque and resized it, capacity will remain the same, if we want to decrease the capacity also then...

// Element access functions
// operatot[], .at(), front(), back()

// Deque modifier functions
// push_back(), pop_back(), push_front(), pop_front()
// assign(), insert()
// erase(), clear()
// swap()

#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> dq1{1,2,3}; // initializeer list
    dq1.push_back(4);
    dq1.push_front(5);
    for (auto it = dq1.begin(); it < dq1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // 5, 1, 2, 3, 4

    deque<int> dq2{1,2,3};
    dq2.assign({4,5,6});
    dq2.insert(dq2.begin(), {7,8});
    dq2.erase(dq2.begin()+1, dq2.end()-3 );
    for (auto it = dq2.begin(); it < dq2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    // 7, 4, 5, 6
    
    return 0;
}

