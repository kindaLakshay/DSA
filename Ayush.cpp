// print array using recursion

#include <bits/stdc++.h>
using namespace std;

int print(int arr[], int i, int n){
    if(i==n) return 0;
    cout<<arr[i]<<" ";
    i++;
    print(arr, i, n);
}

int main(){
    int i = 0;
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int n = 10;
    print(array, i. n);
}