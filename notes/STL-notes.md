C++ STL is generic collection of class templates & algorithms.
It allows to easily implement Standard DS like Stacks, queues & lists.

STL has 
- Containers
- Iterators
- Algorithms

C++ STL has following Constructs/Containers grouped into 3 categories:
- ⅰ) Sequences: Vectors, lists etc (array, dequeue, forward_list)
- ⅱ) container adaptors : Stacks, Queues, Priority Queues etc
- iii) Associative containers: Bitsets, Maps, Multimaps, Sets, Multisets, etc (unordered set, unordered multiset, unordered map, unordered multimap)

Iterators in C++ are like pointers, 
dereferencing uring *

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

cbegin, cend, crbegin, crend -> constant iterators (can't change the value it is pointing to)

Iterator Power Hierarchy:
Forward, Reverse < Bidirectional < Random Access

| **Containers**           | **Iterators Supported** | **Iterator Type** |
| ------------------------ | ----------------------- | ----------------- |
| **Vectors**              | Random access iterators | Random Access     |
| **List**                 | Bidirectional           | Bidirectional     |
| **Deque**                | Random access iterators | Random Access     |
| **Map, Multimaps**       | Bidirectional           | Bidirectional     |
| **Sets, Multisets**      | Bidirectional           | Bidirectional     |
| **Stacks**               | N/A                     | N/A               |
| **Queue, PriorityQueue** | N/A                     | N/A               |


### **Are Iterators Used Only for Accessing Elements?**

Iterators in C++ STL are primarily used for **accessing** and **traversing** elements, but they are **not limited** to just access. Here's how they are used:

1. **Element Access**:

   * Iterators can access elements through dereferencing (`*iterator`) or by using the arrow operator (`iterator->member`).

2. **Element Modification**:

   * **Non-const iterators** can also be used to **modify** the container's elements. For example, you can assign a new value to an element using `*it = new_value`.

3. **Algorithm Operations**:

   * Iterators are commonly used with STL algorithms (like `std::sort`, `std::find`, etc.) to perform various operations on containers.

4. **Container Traversal**:

   * They are primarily used for traversing the container (e.g., using a loop with `begin()` and `end()` to iterate over all elements).


Bidirectional iterators do not support the <, >, <=, or >= comparison operators. (Random access iterator supports)  
`std::set<T>& s;`   -->   set supports bidirectional iterator  
❌ `for (auto it = s.begin(); it < s.end(); it++)`  
✅ `for (auto it = s.begin(); it != s.end(); ++it)`    

`vector<int> a;`  
✅ `for(auto it=a.begin(); it!=a.end(); it++)`  ---> used for all containers that supports iterators ✅✅✅✅  
✅ `for(auto it=a.begin(); it < a.end(); it++)`  
      ✔️ Works for: vector, deque, array (random access iterators)  
      ❌ Fails for: list, set, map (compiler error)  
❌ `for(auto it=a.rbegin(); it < a.rend(); it++)`  
      rbegin() and rend() return reverse iterators.  
      std::vector::reverse_iterator is a random access iterator, so it technically supports <, but the logic is inverted.  