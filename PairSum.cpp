// https://imgur.com/a/qQVlbF3

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{10,20,40,60,70};

    // outer loop will traverse foreach element
    for(int i = 0; i<arr.size(); i++){
    	// int element = arr[i];

    	// for every element will traverse on aage wale elements
    	for(int j=i+1; j<arr.size(); j++){
    		// cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    		if((arr[i]+arr[j])==70)
    			cout<<"pair found "<<arr[i]<<","<<arr[j]<<endl;
    	}
    }
}