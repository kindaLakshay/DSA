#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>  arr;
    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    // transposing
    for(int i=0; i<arr.size(); i++){
    	for(int j=i+i; j<arr[i].size(); j++){
    		swap(arr[i][j], arr[j][i]);
    	}
    }

    // reversing
    for(int i=0; i<arr.size(); i++){
    	reverse(arr[i].begin(), arr[i].end());
    }

    // printing
    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
	}
}