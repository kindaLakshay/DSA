#include <bits/stdc++.h>
using namespace std;

int main(){
    vector< vector<int> > arr;

    vector<int> a{1,2,3};
    vector<int> b{4,5,6};
    vector<int> c{7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size();i++)
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;

    // another, more  complex implementation
    int rows = 3;
    int cols = 5;

    vector<vector<int>> brr(rows, vector<int>(cols,0));

    // printing
    for(int i=0; i<brr.size();i++)
        for(int j=0; j<brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }

}