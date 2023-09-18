#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][2];
    int rows = 3;
    int cols = 2;

    // row wise input
    for(int i=0; i<rows; i++){
    	for(int j=0; j<cols; j++){
    		cin>>arr[i][j];
    	}
    }

    // printing
    for(int i=0; i<rows; i++){
    	for(int j=0; j<cols; j++){
    		cout<<arr[i][j]<<" ";
    	}cout<<endl;
    }

    // column wise input
    for(int i=0; i<cols; i++){
    	for(int j=0; j<rows; j++){
    		cin>>arr[i][j];
    	}
    }cout<<endl;

    // printing
    for(int i=0; i<rows; i++){
    	for(int j=0; j<cols; j++){
    		cout<<arr[i][j]<<" ";
    	}cout<<endl;
    }

}