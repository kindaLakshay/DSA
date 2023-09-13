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
    /* take a INT_MIN, iterate through array, compare*/
    int max = INT_MIN;
    int arr[5] = {2,7,10,6,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i<size; i++){
    	if(arr[i]>max)
    		max = arr[i];
    }
    cout<<max;
}