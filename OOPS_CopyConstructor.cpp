// default copy constructor always does shallow copy
// you need to create a new custom copy constructor for 
// deep copy
#include <bits/stdc++.h>
using namespace std;
	
class Hero{
	private:
	int health;

	public:
	char *name;
	char level;

	// parameterised constructor
	Hero(int health){
		this->health = health;
		cout<<"im in the first constructor"<<endl;
	}
	Hero(int health, int level){
		this->level = level;
		this->health = health;
		cout<<"im in the second constructor"<<endl;
	}

	// copy constructor
	// deep copy
	Hero(Hero &temp){
		char *ch = new char[strlen(temp.name)+1];
		strcpy(ch, temp.name);
		this->name = ch;

		cout << "copy constructor called" << endl;
		this->health = temp.health;
		this->level = temp.level;
	}

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
	Hero S(70, 'C');
	S.print(); 
	// copy constructor
	Hero R(S);
	R.print();
}