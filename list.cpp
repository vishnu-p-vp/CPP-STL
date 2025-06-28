// Lists are sequence of elements stored in a linked list(Doubly linked list).
// Compared to vectors, fast insertion and deletion 
// -- (at middle -> shifting required for vector, for list if we have iterator O(1) time)
// -- (also inserted and deleted at beginning in O(1) in list),
// but slower random access (No .at() and indexing[] )

// Creating list same as vectors
// comparison ==,!=,>,<,>=,<=    EX: (v1>=v2) -> lexicographic comparison(dictonary order)  

#include<list>
#include<iostream>

using namespace std;

int main()
{
    list<int> l1{1,2,3};

    cout<<"first element: "<<l1.front();
    cout<<"\n last element: "<<l1.back()<<endl;    

    for(auto it=l1.begin(); it!=l1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    for(auto it=l1.rbegin(); it!=l1.rend(); it++)
    {
        cout<<*it<<" ";
    }

    // clear(), erase(), empty()
    // capacity() doesn't exist
    // push_front(), pop_front(), push_back(), pop_back()
    // insert()
    // size(), resize()
    // max_size()
    // assign()    EX: assign(10, 42)  -->  10 times 42 inserted, EX2: assign(it1, it2)
    // l1.swap(l2)
    return 0;
}