#include<iostream>
#include<vector>
using namespace std;

void printVector(const vector<int>& v) //pass by reference
// pass by value(receives a copy of the vector) -> (vector<int> v)
{
    cout<<"common method to print(vector) :\n";
    for (auto x: v) {
        cout << x << " ";
    }
    cout << endl;
}

int main(){

    cout<<"Vectors practice\n";
    // different ways of creating vector/ different constructors
    // vector<int> v1; => default constructor => v1[0]=2 is error since capacity & size is 0
    // vector<int> a(8); => capacity=8
    // vector<int> v1(v2); => copy constructor
    // vector<int> v1(2,1); => 2 ele with value 1 i.e., v1[0]=1, v1[1]=1
    // vector<int> v2(iterator1, iterator2);
    // int arr[]={1,2,3,4,5,6}; vector<int> v(arr,arr+6);
    vector<int> a{1}; // initially pushed 1
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.pop_back();

    printVector(a);

    cout<<"first element is : "<<a.front();
    cout<<"\nlast element is : "<<a.back();
    cout<<"\nelement at location 2 is : "<<a.at(1)<<" "<<a[1];

    cout<<"\nPrinting vector by array indexing\n";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Printing vector by forward iterator\n";
    //vector<int>::iterator it;
    for(auto it=a.begin(); it!=a.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Printing vector by backward/reverse iterator:\n";
    // vector<int>::reverse_iterator it;
    for(auto it=a.rbegin(); it!=a.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // comparison ==,!=,>,<,>=,<=    EX: (v1>=v2) -> lexicographic comparison(dictonary order)  

    a.erase(a.begin());
    a.insert(a.begin(),1);
    a.insert(a.end(), a.begin(), a.end() );
    a.erase( a.begin(), a.end() );
    a.clear();

    bool isEmpty=a.empty();
    cout<<"is vector empty?\n"<<isEmpty<<"\n";

    // while(!a.empty())  //{do something} or ( a.size()>0 )
    // {
    //     vector<int>::iterator it=a.begin();
    //     a.erase(it);
    // }
    //     a.clear();

    // a.resize(3);
    cout<<"max size of vector: "<<a.max_size();  // Returns the maximum number of elements the vector can hold based on the system’s memory limitations and the size of the data type.
    // vector<int> v;  =>  v.max_size() => lage number allocated
    cout<<"\n capacity:"<<a.capacity();   // like sizeof()  => vector<int> v(10) => capacity = 10
    // for vector<int> v(10) => if we push 3 elements => v.size() = 3

    // v.reserve(20)  => increace the capacity

    // resize() alters size (decrease)
    // reserve() alters capacity

    // two vectors v1 and v2 ->    v1.swap(v2) => swaps

    // sort(), stable_sort(), comparators (binary predicate)
    // binary_search(), upper_bound(), lower_bound() ====>  (upper - lower) => if sorted, Difference gives the count of occurrences of target value passed
    // count(), count_if(), unary predicate
    // find(), find_if()
    // unique(), unique_copy ---> different   {1,1,2,2,3,3,3,1} -> {1,2,3,1} = i==j  ---> using binary predicate change i!=j, i<=j,......
    // reverse(), reverse_copy()
    // transform(), rotate(), rotate_copy()
    // random_sample(), random_shuffle()
    cout<<endl<<endl<<endl;

    
    cout<<endl;
    return 0;
}