#include<iostream>
#include<list>

using namespace std;

int main(){
	list<int> l;
	// list<int> n(5,100);
	l.push_back(1);
	l.push_front(2);
	// l.erase();
	// l.size();
	// l.pop_back();
	// l.pop_front();


	for(int i:l)
		cout<<i<<endl;


}