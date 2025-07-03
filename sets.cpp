// Four containers based on sets
// set                    --> ordered (default: ascending), duplicate values not allowed(unique elements)
// multiset               --> ordered (default: ascending), duplicate values allowed
// unordered_set          -->                               duplicate values not allowed(unique elements)
// unordered_multiset     -->                               duplicate values allowed

// set
// unique elments
// once the ele is inserted can't be modified (can be deleted and inserted)
// order of the elements can defined by us using comparator (default is  "<" ascending)  --->  we define order like in priority queue(descending by default) but container not required
// Ex: set<int, greater<int>> s;

// Priority queue implemented using "heap"                          (Whenever we want to implement heap functionality in STL we use priority queue)
// set, multiset implemented using "Binary Search Tree (BST)"       (Whenever we want to implement  BST functionality in STL we use     sets      ) --> not unordered_set and unordered_multiset

// Element in set are identified by there value itself (the value of the ele is key to it)
// .find(value)    Ex: .find(5)   returns an iterator to it
// No index[], .at() xxxxxxxxxxxxxxxxxxxxx

// Iterators; begin, end, rbegin, rend, cbegin, cend, crbegin, crend

// capacity functions
// empty()
// size()
// max_size()

// Modifier functions
// insert()
// erase()
// swap()
// clear()

// Operations
// find()  returns iteratoe
// count()  ->  for set 0 or 1, for multiset - can be any other no.
// upper_bound()
// lower_bound()

// ------------------------------------------------------------------------
// Multisets
// multiple ele can have equivalent values (can have duplicates)
// have specific ordering (default: "<" ascending)
// the value is itself the key --> .find(value)
// Implemented using BST

#include<iostream>
#include <set>

using namespace std;

template <class T>
void printSet(const set<T>& s)
{
    for(const auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

template <class T>
void printSetByIterators(const set<T>& s)
{
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    set<int> s1;
    set<int> s2 = {5,3,8,9};

    s1.insert(3);
    s1.insert(1);
    s1.insert(2);
    printSet(s1);

    s1.insert(3);   // inserting 3 again(duplicate value) -> don't give error but will not be inserted
    printSetByIterators(s1);

    s1.erase(2);
    printSet(s1);

    auto iteratorToDelExceptLastOneEle = s1.end();
    advance(iteratorToDelExceptLastOneEle, -1);
    s1.erase(s1.begin(),iteratorToDelExceptLastOneEle);  
    // you cannot do s.erase(s.begin(), s.end() - 2) in std::set, because: set iterators are bidirectional iterators, not random access iterators.
    printSet(s1);

    return 0;
}