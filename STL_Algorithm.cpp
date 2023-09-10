#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr<<x<<" ";


int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 6-> "<<binary_search(all(v),6)<<endl;
    cout<<"lower bound-> "<<lower_bound(all(v),6)-v.begin()<<endl;
    cout<<"upper bound-> "<<lower_bound(all(v),4)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"max -> "<<max(a,b)<<endl;
    cout<<"min -> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"a-> "<<a<<endl;

    string abcd = "abcd";
    reverse(all(abcd));
    cout<<"string-> "<<abcd<<endl;

    rotate(v.begin(),b.begin()+1,v.end());
    cout<<"after rotate: "<<endl;
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;


    /* sort() working, based on IntroSort
    (which is a combination of: )
    Quick Sort,
    Heap Sort,
    insertion Sort
    */

    sort(v);
}
