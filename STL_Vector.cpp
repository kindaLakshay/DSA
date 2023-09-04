#include<iostream>
#include<vector>
using namespace std;

int main(){

	// vector<int> v;
	// cout<<"capacity-> "<<v.capacity()<<endl;

	// v.push_back(1);
	// cout<<"capacity-> "<<v.capacity()<<endl;

	// v.push_back(2);
	// cout<<"capacity-> "<<v.capacity()<<endl;

	// v.push_back(3);
	// cout<<"capacity-> "<<v.capacity()<<endl;

	// cout<<"elemet at 2nd Index: "<< v.at(2)<<endl;

	// cout<<"front "<< v.front()<<endl;
	// cout<<"back "<< v.back()<<endl;

	// cout<<"before pop"<<endl;
	// for(int i:v){
	// 	cout<<i<<" ";
	// } cout<<endl;

	// v.pop_back();

	// cout<<"after pop"<<endl;
	// for(int i:v) {
	// 	cout<<i<<" ";
	// }

	// cout<<"before clear size "<<v.size()<<endl;
	// v.clear();
	// cout<<"after clear size "<<v.size()<<endl;

	// initislisting vector with pre defined size
	vector<int> v;
	std::vector<int> a(5,1);
	std::vector<int> last(a);

	cout<<"Print last"<<endl;
	for(int i:last){
		cout<<i<<" ";
	}cout<<endl;

	cout<<"capacity-> "<<v.capacity()<<endl;

	v.push_back(1);
	cout<<"capacity-> "<<v.capacity()<<endl;

	v.push_back(2);
	cout<<"capacity-> "<<v.capacity()<<endl;

	v.push_back(3);
	cout<<"capacity-> "<<v.capacity()<<endl;

	cout<<"elemet at 2nd Index: "<< v.at(2)<<endl;

	cout<<"front "<< v.front()<<endl;
	cout<<"back "<< v.back()<<endl;

	cout<<"before pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	} cout<<endl;

	v.pop_back();

	cout<<"after pop"<<endl;
	for(int i:v) {
		cout<<i<<" ";
	}

	cout<<"before clear size "<<v.size()<<endl;
	v.clear();
	cout<<"after clear size "<<v.size()<<endl;

}