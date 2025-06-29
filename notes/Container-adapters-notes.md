Container Adapters

They are not directly implemented using arrays or linked lists—instead, the underlying container decides whether an array-like or linked-list-like structure is used.
They use other containers (like deque, vector, or list) as their internal data structure and adapt the interface of those containers to behave like a stack, queue, or priority queue.

| Adapter          | Underlying Container (Default) | Access Pattern | Interface Methods              |
| ---------------- | ------------------------------ | -------------- | ------------------------------ |
| `stack`          | `std::deque`                   | LIFO           | `push`, `pop`, `top`           |
| `queue`          | `std::deque`                   | FIFO           | `push`, `pop`, `front`, `back` |
| `priority_queue` | `std::vector`                  | Priority-based | `push`, `pop`, `top`           |

+ empty(), size(), swap()


## 🔹 1. `std::stack` (default: `std::deque`)

| Operation | Description             | Time Complexity | Notes                             |
| --------- | ----------------------- | --------------- | --------------------------------- |
| `push()`  | Add to top              | **O(1)**        | Delegates to `deque::push_back()` |
| `pop()`   | Remove from top         | **O(1)**        | Delegates to `deque::pop_back()`  |
| `top()`   | Access top element      | **O(1)**        | Delegates to `deque::back()`      |
| `empty()` | Check if stack is empty | **O(1)**        | Constant time                     |

➡️ If using `std::vector` instead of `deque`, `push_back()` may occasionally take **amortized O(1)** due to resizing.

## 🔹 2. `std::queue` (default: `std::deque`)

| Operation | Description             | Time Complexity | Notes                |
| --------- | ----------------------- | --------------- | -------------------- |
| `push()`  | Add to back             | **O(1)**        | `deque::push_back()` |
| `pop()`   | Remove from front       | **O(1)**        | `deque::pop_front()` |
| `front()` | Access front            | **O(1)**        | `deque::front()`     |
| `back()`  | Access back             | **O(1)**        | `deque::back()`      |
| `empty()` | Check if queue is empty | **O(1)**        | Constant time        |

➡️ If you use `std::list` instead of `deque`, it still gives O(1) insertion/removal at both ends.

## 🔹 3. `std::priority_queue` (default: `std::vector` + heap)

| Operation | Description             | Time Complexity | Notes                                      |
| --------- | ----------------------- | --------------- | ------------------------------------------ |
| `push()`  | Insert element          | **O(log n)**    | Maintains heap invariant using `push_heap` |
| `pop()`   | Remove highest priority | **O(log n)**    | Uses `pop_heap` + `vector::pop_back()`     |
| `top()`   | Access highest priority | **O(1)**        | Returns front of the heap                  |
| `empty()` | Check if empty          | **O(1)**        | Constant time                              |

➡️ Heap operations are logarithmic because the binary heap is a **complete binary tree** stored in an array.

## ✅ Summary Table (Default Containers)

| Adapter               | Insert (`push`) | Delete (`pop`) | Access (`top` / `front`) | Underlying Container |
| --------------------- | --------------- | -------------- | ------------------------ | -------------------- |
| `std::stack`          | O(1)            | O(1)           | O(1)                     | `std::deque`         |
| `std::queue`          | O(1)            | O(1)           | O(1)                     | `std::deque`         |
| `std::priority_queue` | O(log n)        | O(log n)       | O(1)                     | `std::vector` (heap) |


