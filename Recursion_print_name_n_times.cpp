#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
	if (n==0) return;
	cout<<"name "<<n<<endl;
	print(--n);
}

int main(){
    int n = 5;
    print(n);
}