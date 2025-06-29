// constructors --> queue(), queue(const container& con) --> default & copy constructor
// queue<int> q2(q1);  --> copy constructor example

// push(), pop() --> only front is visible
// front()
// empty()
// size()  
// swap()
// No clear() xxxxxxxxxxxxxx

#include<iostream>
#include<queue>

using namespace std;

void printQ(queue<int> q2)
{
    cout<<endl<<"Queue: ";
    while (!q2.empty())
    {
        cout<<q2.front()<<'\t';
        q2.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(0);

    for (int i = 0; i < 5; i++)
    {
        q.push(i+1);
    }

    cout<<"size: "<<q.size();
    cout<<"\n Front: "<<q.front();

    printQ(q);
    cout<<endl<<boolalpha<<"Is queue empty: "<<q.empty();

    cout<<endl<<"Queue: ";
    while (!q.empty())
    {
        cout<<q.front()<<'\t';
        q.pop();
    }
    cout<<endl<<boolalpha<<"Is queue empty: "<<q.empty();

    return 0;
}