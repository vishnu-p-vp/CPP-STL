// pair is a class template

// < _ , _ >    --> pair (tuple of 2 variables)
// std::pair<T1, T2> --> pair (2-element tuple)
// Example: (index, value), (key, value) like dictionaries , e.g., {3, "Kiran"}
// Ex:  std::pair<int, std::string> p = {3, "Kiran"};


// < _ , < _ , _ > >      -->  triplets (tuple of 2 variables / pairs of pairs)
// std::pair<T1, std::pair<T2, T3>> --> triplet (3-element tuple)
// Example: {1, {"Kiran", 99.9}} represents (id, name, score)
// Ex: std::pair<int, std::pair<std::string, double>> triplet = {1, {"Kiran", 99.9}};

// Similarly quadruplets, any finite number of elements --> pairs of pairs

// -------------------------------------------------------------------------------------------------------------
// Quadruplets and Beyond
// You can keep nesting:
// std::pair<int, std::pair<std::string, std::pair<double, char>>> quadruplet = {1, {"Kiran", {99.9, 'A'}}};

// But this becomes messy quickly, and you should instead use:
// std::tuple<int, std::string, double, char> t = {1, "Kiran", 99.9, 'A'};

// | Concept       | Preferred C++ Type                 | Example                   |
// | ------------- | ---------------------------------- | ------------------------- |
// | Pair          | `std::pair<T1, T2>`                | `{3, "Kiran"}`            |
// | Triplet       | `std::tuple<T1, T2, T3>`           | `{3, "Kiran", 99.9}`      |
// | Triplet (alt) | `std::pair<T1, std::pair<T2, T3>>` | `{3, {"Kiran", 99.9}}`    |
// | Quadruplet+   | `std::tuple<T1, T2, ...>`          | `{1, "Kiran", 99.9, 'A'}` |
// --------------------------------------------------------------------------------------------------------------

// .first, .second  --> member variables
// pair<int,int> p; 
// p.first = 1;
// p.second = 2;

// member functions

// (constructor)
// = assignment   (data types should be same)
// swap()         (data types should be same)

// make_pair()
// pair<int,int> p = make_pair(2,3)


// Initializing a pair

// pair<int, char> g1;                       default
// pair<int, char> g2(1, 'a');               initialized, different data type
// pair<int, int> g3(1, 10);                 initialized, same data type
// pair<int, int> g4(g3);                    copy of g3
// pair<int, char> g5 = make_pair(1, 'a');   Using make_pair()

// in pairs <, >, == values are overloaded
// if(p1<p2) --> checks first element of the pair returns true if (p1.first < p2.first)
// == --> checks both the values

// if v is a vector of pairs (vector<pair<int,int>> v;)
// sort(v.begin(), v.end());  ---->   sort the vector by the first element of the pair 

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool sortBySecondValue(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second>b.second); // descending order
    // return (a.second<b.second); // ascending order
}

template <class T1, class T2>    // template <class Pair>
void displayVecPair(const vector<pair<T1,T2>> &v)   // (const vector<Pair> &v)
{
    for (const auto i : v)
    {
        cout << i.first << " , " << i.second <<endl;
    }
}

int main()
{
    pair<int,char> p1;  // header file --> #include <utility>
    p1.first = 1;
    p1.second = 'a';
    cout << p1.first << " , " << p1.second;
    cout<<endl;

    vector<pair<int,char>> v;
    for (int i = 0; i < 26; i=i+2)
    {
        v.push_back({i+1,'a'+i});
        v.push_back(make_pair(i+2,'a'+i+1));
        // v.push_back({i + 1, static_cast<char>('a' + i)});
    }
    cout<<"Vector of pairs:\n";
    for (const auto i : v)
    {
        cout << i.first << " , " << i.second <<endl;
    }

    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), sortBySecondValue);
    cout<<"Vector of pairs after sorting:\n";
    displayVecPair(v);
    
    return 0;
}