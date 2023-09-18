#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    int transpose[rows][cols];
    // transpose
    for(int i=0; i<rows; i++){
    	for(int j=0; j<cols; j++){
    		// swap(arr[i][j],arr[j][i]);
    		/* the upper approach doesnt work because it 
    		swaps 2 times which brings it back to its 
    		original state.
    		so we use a different approach*/
    		transpose[i][j]=arr[j][i];
    	}
    }
	
	// printing
	for(int i=0; i<rows; i++){
    	for(int j=0; j<cols; j++){
    		cout<<transpose[i][j]<<" ";
    	}cout<<endl;
    }

}