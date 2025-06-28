// No iterators in stack
// Limited functionalities -- can't iterate over all elements  --> see top and pop until empty

// push(), pop(), top()
// empty()
// size()
// swap()
// No resize(), capacity() xxxxxxxxxxxxxxxxxx


#include<iostream>
#include<stack>

using namespace std;

template <class T>
void displayStack(stack<T> st1)
{
    while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    cout<<endl;
}

int main()
{
    cout<<"Stacks\n";
    stack<int> st;

    for(int i=0; i<5; i++){
        st.push(i+1);
    }

    displayStack(st);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    cout<<boolalpha;
    cout<<"is empty? "<<st.empty();

    return 0;
}