#include <bits/stdc++.h>
using namespace std;
	
class Hero{
	private:
	int health;
	public:
	int level;


	Hero(){
		cout << "Constructor called!" <<endl;
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
	// object created statically
	Hero ramesh;

	// dynamically
	Hero *ram = new Hero;

}