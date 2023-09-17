// https://imgur.com/a/aaDxe81

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

int findUnique(vector<int> arr){
	int ans = 0;

	for (int i=0;i<arr.size(); i++){
		ans = ans ^ arr[i];
	}

	return ans;
}

int main()
{
	int n;
	cout<<"enter size: ";
	cin>>n;
    vector<int> arr(n);

    // taking input
    for(int i = 0; i<arr.size(); i++)
    	cin>>arr[i];
    cout<<endl;

    int uniqueElement = findUnique(arr);
    cout<<"the uniqueElement is: "<<uniqueElement;


    
}