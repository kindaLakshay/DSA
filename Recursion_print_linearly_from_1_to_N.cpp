#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
	if(i>n) return;
	cout<<i<<" ";
	print(++i, n);
}

int main(){
    int n = 4;
    print(1, n);
}