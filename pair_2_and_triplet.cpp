#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

#define F first
#define S second
#define pi pair<int,int>
#define mp make_pair
#define pb push_back

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
// cin>>n;
// vector<pi> v(n);
// FOR(i,0,n)  cin >> v[i].F >> v[i].S ;

bool sortByThird(const pair<int,pi> &a,const pair<int,pi> &b)
{
    return (a.S.S > b.S.S);  // descending order
}

template <class Triplet>
void displayVecTriplet(const vector<Triplet> &v)
{
    for (auto &&i : v)
    {
        cout<<"("<<i.F<<","<<i.S.F<<","<<i.S.S<<")";
    }
    cout<<endl;
}

bool sortBySecAscFirstDesc(const pi &a,const pi &b)
{
    if(a.S == b.S)
        return (a.F > b.F);
    return (a.S < b.S);        // else
}

template <class Pair> // template <class T1, class T2>   
void displayVecPair(const vector<Pair> &v)   // (const vector<pair<T1,T2>> &v)
{
    for (const auto i : v)
    {
        cout << i.first << " , " << i.second <<endl;
    }
}

int main()
{
    // // pair
    // pi a;
    // a = mp(1,1);
    // cout << a.F << " , " << a.S ;

    // // vector of pair
    // vector<pi> v;
    // v.pb(mp(1,1));
    // v.pb({2,2});

    // Triplet
    vector<pair<int,pi>> v1;
    v1.pb({1,{2,3}});
    v1.pb({2,{3,4}});
    v1.pb({3,{4,5}});
    
    sort(v1.begin(), v1.end(), sortByThird);
    displayVecTriplet(v1);

    vector<pi> v2;
    v2.pb({2,1});
    v2.pb({3,1});
    v2.pb({1,2});
    v2.pb({5,2});
    v2.pb({7,0});

    // 2nd value ascending -- (if equal) --> 1st value descending
    // (2,1),(3,1),(1,2),(5,2),(7,0) --> (7,0),(3,1),(2,1),(5,2),(1,2)
    sort(v2.begin(), v2.end(), sortBySecAscFirstDesc);
    displayVecPair(v2);

    return 0;
}