C++ STL is generic collection of class templates & algorithms.
It allows to easily implement Standard DS like Stacks, queues & lists.
-------------------------------------------------------------------------------------------------------
STL has 
- Containers,
- iterators
- algorithms
-------------------------------------------------------------------------------------------------------
C++ STL has following Constructs/Containers grouped into 3 categories:
ⅰ) Sequences: Vectors, lists etc (array, dequeue, forward_list)
ⅱ) container adaptors : Stacks, Queues, Priority Queues etc
iii) Associative containers: Bitsets, Maps, Multimaps, Sets, Multisets, etc (unordered set, unordered multiset, unordered map, unordered multimap)
-------------------------------------------------------------------------------------------------------
Iterators in C++ are like pointers, 
Dereferencing uring *

Syntax:
std :: class_name <template_paramuters> :: iterator_name;
Example: 
std::vector<int>::iterator it;

Itcraters distinguished by how we use them for reading/writing in container, some iterator both read/writing not necessarily at same time.

Types

- Input iterators: Accessing elements of containers
- Output iterators: To assign value to memory of container
- Forward iterators
- Reverse iterators
- Bidienctional iterators
- Random access iterators
-------------------------------------------------------------------------------------------------------
1. Vector
2. List
3. Priority Queue
   
   - Operator Overloading 
   - for_each and range based for loop 
   - some_generic_algo 
   
4. Stack
5. Queue
