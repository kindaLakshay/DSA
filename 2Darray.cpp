// https://imgur.com/a/fUUlBVT
// https://imgur.com/a/elyOayr
// formula = c*i+j

#include <bits/stdc++.h>
using namespace std;

int main(){
    // declare 2d array
	int arr[3][3];

	// initialisation
	int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	cout<<"brr[2][2]: "<<brr[2][2]<<endl;
	cout<<"brr[3][3]: "<<brr[3][3]<<endl; //garbage value

	// row-wise print
	// outer loop
	for(int i=0; i<3; i++){
		// for every row we need to print all values in each column 
		for(int j=0; j<3; j++){
			cout<<brr[i][j]<< " ";
		}
		cout<<endl;
	}
	cout<<endl;
	// columns wise
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			// exchange i and j
			cout<<brr[j][i]<< " ";
		}
		cout<<endl;
	}	


}
