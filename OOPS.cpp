#include <bits/stdc++.h>
using namespace std;
	
class Hero{
	// empty class gets 1 byte, just to 
	// keep track of it
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
    Hero ramesh;
    cout<<"size: "<<sizeof(ramesh)<<endl;
    // ramesh.health = 70;
    // cant access health because it is private member
    cout<<"Ramesh health is " << ramesh.getHealth() << endl;
    ramesh.setHealth(70);
    cout<<"Ramesh's updated health is " << ramesh.getHealth() << endl;
    ramesh.level = 'A';

    // cout<<"health is: "<<ramesh.health<<endl;
    cout<<"level is: "<<ramesh.level<<endl;

}