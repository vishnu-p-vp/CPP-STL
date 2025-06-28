// for_each() generic algorithm: (>C++11)

// template <class Inputlterator, class Function> 
// Function for_each (Inputlterator first, InputIterator last, Function fn);

// Applies function fn to each of the elements in the range [first,last)

// fn --> Unary function that accepts an element in the range as argument. This can either be a function pointer or a move constructible function object. Its return value, if any, is ignored.

// Unary predicate
// Binary predicate
// Unary function
// Binary fünction

// Example 1 of for_each()

// void fun (int i) 
// {
//     cout<<i<<" ";
// }

// int main () 
// {
//     vector<int> v(5);
//     for(int i=0; i<5; i++) v[i]=i+1;
//     for each (v.begin(), v.end(), fun);
//     cout<<endl;
//     return 0;
// }

// Example 2 of for_each()

// struct A
// {
//     void operator()(int i) { cout<<i+5<<" ";}
// };

// int main () 
// {
//     vector<int> v(5);
//     for(int i=0; i<5; i++) v[i]=i+1;
//     struct A obj;
//     for_each (v.begin(), v.end(), obj); // obj or A or we can also create class as funcion using operator ()
//     cout<<endl;
//     return 0;
// }

// ----------------------------------------------------------------

// Range-based for loop in C++:

// Syntax:
// for (range_declaration : range_expression)
//     loop_statement

// Example 1:

// int main () 
// {
//     vector<int> v(5);
//     for(int i = 0 ; i < 5 ; i++) v[i] = i + 1 ;
//     for(int x: v)
//      cout<<x<<" ";
//     cout<<endl;

//     int arr[5];
//     for(int i = 0 ; i < 5 ; i++) arr[i] = i + 5 ;
//     for(int x: arr)
//      cout<<x<<" ";

//     return 0;
// }

// Example 2:

// int main () 
// {
//     string str = "Jay Bansal";
//     for(char x: str)
//      cout<<x<<" ";
//     cout<<endl;

//     for(int x: {1, 2, 3, 4, 5})
//      cout<<x<<" ";
//     cout<<endl;

//     return 0;
// }