#include <bits/stdc++.h>
using namespace std;
	
class Hero{
	private:
	int health;
	public:
	int level;


	Hero(int health){
		this->health = health;
		cout<<"im in the first constructor";
	}
	Hero(int health, int level){
		this->level = level;
		this->health = health;
		cout<<"im in the second constructor";
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
	Hero b(50);
	Hero c(50, 'A');

	


}