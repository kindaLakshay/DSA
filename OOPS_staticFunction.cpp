/* static functions are like static data members
they also dont need an object initialised to work

they cant use 'this' keywork because 
'this' is a pointer to the current object
but static is a property of a class.

*/ 

#include <bits/stdc++.h>
using namespace std;

class Hero{
private:
	int health;
public:
	char *name;
	char level;

	static int huihui;

	// static member functions can only access
	// static data members
	static void random(){
		cout << "hehe" << huihui;
	}

};
int Hero::huihui = 10;

int main(){
	Hero::random();
}

