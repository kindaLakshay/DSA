#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {2, 8, 7, 1, 5};
    int n = 5;
    int max1 =0, max2 = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>max1){
            max2 = max1;
            max1 = a[i];
        }
    }cout<<max1<<" "<<max2<<endl;
    vector<int> v;
    for(int i = 0; i<n; i++){
        if(a[i]!=max1 && a[i]!=max2){
            v.push_back(a[i]);
        }
    }
    for(auto i : v) cout<<i<<" ";
}