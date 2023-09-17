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
	vector<int> arr;
	/* more on how to initialize:
	https://imgur.com/a/u5j7tuN*/


	/*v is an empty vector<int>, just like in your previous example. 
	Therefore, sizeof(v) will return the size in bytes of the vector<int> 
	object itself, which includes various internal data members used for
	 managing the vector (such as a pointer to dynamically 
	 allocated memory, size, and capacity).

	sizeof(int) is the size in bytes of an int in your system, 
	typically 4 bytes on most modern systems.

	Since v is empty, sizeof(v) is not zero, and it will typically 
	be larger than sizeof(int) due to the internal data members
	 of the vector. Dividing these two values will not give you 
	 the number of elements in the vector.
	*/
	int ans = (sizeof(arr)/sizeof(int));
	cout<<ans<<endl;

	cout<<"capacity: "<<arr.capacity()<<endl;
	cout<<"size:"<<arr.size()<<endl;

	// insert
	arr.push_back(5);
	arr.push_back(6);

	// printing arr
	cout<<"printing vector A : ";
	for(auto i:arr)
		cout<<i<<" ";
	cout<<endl;

	arr.pop_back();
	// removes the last element of the vector


	vector<int> brr(10,11);
	// initialises vector b in 10 size and all elements 11
	cout<<"size of b "<<brr.size()<<endl;
	cout<<"capacity of b "<<brr.capacity()<<endl;

	cout<<"printing vector B : ";
	for(auto i:brr)
		cout<<i<<" ";
	cout<<endl;

	// adeing an element after size==capacity leads to the vector doubling its capacity.
	brr.pb(10);
	cout<<"size of b "<<brr.size()<<endl;
	cout<<"capacity of b "<<brr.capacity()<<endl;




}