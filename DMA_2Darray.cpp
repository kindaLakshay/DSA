#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	// creatint a 2D array
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
    	arr[i] = new int[n];
    }

    // taking input
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cin>>arr[i][j];
    	}
    }

    // showing output
    cout<<endl;
    for(int i=0; i<n; i++){
    	for(int j=0; j<n; j++){
    		cout<<arr[i][j]<<" ";
    	}cout<<endl;
    }}