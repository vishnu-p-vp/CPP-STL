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