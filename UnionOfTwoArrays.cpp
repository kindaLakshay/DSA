// https://imgur.com/a/xMz0SFv

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


int main()
{
    // Union
    int arr[] = {2,4,6,8};
    int sizea = 4;
    int brr[] = {1,3,5,7,9};
    int sizeb = 5;

    vector<int> ans;

    // push all elements of arr
    for(int i = 0; i<sizea; i++){
    	ans.push_back(arr[i]);
    }

    // push all elements of arr
    for(int i = 0; i<sizeb; i++){
    	ans.push_back(brr[i]);
    }

    // print ans
    for(int i:ans)
    	cout<<i<<" ";
    
}