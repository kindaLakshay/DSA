#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,3},{5,6,0},{7,8,7}};
    int rows = 3;
    int cols = 3;
    int maxi = INT_MIN;
    // column wise sum
    for(int i=0; i<rows; i++){
    	for(int j=0; j<cols; j++){
    		if(maxi<arr[i][j])
    			maxi=arr[i][j];
    			// cout<<arr[i][j];
    	}
    }cout<<maxi;

}