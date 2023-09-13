// https://imgur.com/a/Ez2ksE7 
// check ss for question image

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
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int mid = size/2;



	int end = size-1;
	int start = 0;
	
	// for(int start = 0; start<mid;start++){
	// 	cout<<arr[start]<<" "<<arr[end--]<<" ";
	// }

    while(start<end){
    	cout<<arr[start++]<<" "<<arr[end--]<<" ";
    }
}