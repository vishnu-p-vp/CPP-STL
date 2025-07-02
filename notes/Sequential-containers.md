# Sequential Containers

1. **`std::array`** (Fixed-size, static container)
2. **`std::vector`** (Dynamic array, flexible size)
3. **`std::list`** (Doubly linked list)
4. **`std::deque`** (Double-ended queue)
5. **`std::forward_list`** (Singly linked list)

| **Container**           | **Insert/Push Operations**                             | **Pop/Erase Operations**               | **Access/Query Operations**               | **Resizing Operations**           | **Iterators**                            | **Common Methods**            |
| ----------------------- | ------------------------------------------------------ | -------------------------------------- | ----------------------------------------- | --------------------------------- | ---------------------------------------- | ----------------------------- |
| **`std::array`**        | **N/A** (Fixed-size)                                   | **N/A** (Fixed-size)                   | `at()`, `operator[]`, `front()`, `back()` | **N/A** (Fixed-size)              | `begin()`, `end()`                       | `empty()`, `size()`, `swap()` |
| **`std::vector`**       | `push_back()`, `insert()`                              | `pop_back()`, `erase()`                | `at()`, `operator[]`, `front()`, `back()` | `resize()`, `shrink_to_fit()`     | `begin()`, `end()`, `rbegin()`, `rend()` | `empty()`, `size()`, `swap()` |
| **`std::list`**         | `push_back()`, `push_front()`, `insert()`, `emplace()` | `pop_back()`, `pop_front()`, `erase()` | `front()`, `back()`                       | `resize()`, `clear()`, `remove()` | `begin()`, `end()`, `rbegin()`, `rend()` | `empty()`, `size()`, `swap()` |
| **`std::deque`**        | `push_back()`, `push_front()`, `insert()`              | `pop_back()`, `pop_front()`, `erase()` | `at()`, `operator[]`, `front()`, `back()` | `resize()`, `shrink_to_fit()`     | `begin()`, `end()`, `rbegin()`, `rend()` | `empty()`, `size()`, `swap()` |
| **`std::forward_list`** | `push_front()`, `insert_after()`, `emplace_front()`    | `pop_front()`, `erase_after()`         | `front()`                                 | `resize()`, `clear()`, `remove()` | `begin()`, `end()`                       | `empty()`, `size()`, `swap()` |

