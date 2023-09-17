

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
    
    vector<int> arr{1,2,3,4,5};
    vector<int> brr{4,5,6,7,8};

    vector<int> ans;

    // outer loop on arr vector
    for(int i = 0; i<arr.size(); i++){
    	// for every element of i, run loop on brr
    	for(int j = 0; j<brr.size(); j++){
    		if(arr[i]==brr[j]){
    			// mark
    			// if you dont mark, elements will be repeated1
    			brr[j] = INT_MIN;
    			// can use break too!
    			ans.push_back(arr[i]);
    		}
    	}
    }

   for(int i:ans)
   		cout<<i<<" ";

    
}