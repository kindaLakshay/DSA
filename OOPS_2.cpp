#include <bits/stdc++.h>
using namespace std;
	
class Hero{
	private:
	int health;
	public:
	char name[100];
	int level;

	void print(){
		cout<<level<<endl;
	}

	int getHealth(){
		return health;
	}

	char getLevel(){
		return level;
	}

	void setHealth(int h){
		health = h;
	}

	void setLevel(char c){
		level = c;
	}
};

int main(){
	// static allocation
	Hero a;
	a.setHealth(8);
	a.setLevel('B');
	cout << "level is " << a.level << endl;
	cout << "Health is " << a.getHealth()<<endl;

	cout<<endl;

	// dynamically
	Hero *b = new Hero;
	b->setLevel('A');
	b->setHealth(70);
	cout << "level is " << (*b).level << endl;
	cout << "Health is " << (*b).getHealth() << endl;
	// you can also use the approach below
	cout << "level is " <<  b->level << endl;
	cout << "Health is " << b->getHealth() << endl;
}