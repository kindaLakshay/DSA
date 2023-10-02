#include <bits/stdc++.h>
using namespace std;

class Hero{
private:
	int health;
public:
	char *name;
	char level;
	static int timeToComplete; //adding static datamember
};

// initialised
int Hero::timeToComplete = 5;
//   ::   is called scope resolution operator

int main(){
	cout<<Hero::timeToComplete<<endl;
	// you dont have to create an object to access
	// a static data member 

	Hero a;
	cout<<a.timeToComplete<<endl;
	/* you can also access it this way, but you shouldnt, because it is not a property of the 
	opject, but a property of the CLASS ITSELF*/

}