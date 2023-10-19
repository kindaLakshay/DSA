#include <bits/stdc++.h>
using namespace std;

int power(int n, int i){
	if(i==0) return 1;
	return n*pow(n,i-1);
}

int main(){
    cout<<power(2,3);
}

// #include <bits/stdc++.h>
// using namespace std;

// int power(int n, int i){
// 	int ret = 1;
// 	ret *= n;
// 	if(i == 0) return 1;
// 	return n* power(n, i-1);
// }

// int main(){
//     cout<<power(2, 2);
// }