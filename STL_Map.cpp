#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,string> m;
    // unordered_map<int,string> um;

    m[1] = "babbar";
    m[2] = "love";
    m[3] = "Kumar";

    m.insert( {5,"bheem"});

    cout<<"before erase: "<<endl;
    for(auto i:m)
    	cout<<i.first<<" ";
	cout<<endl;

    cout<<"finding 2-> "<<m.count(2)<<endl;

    cout<<"after erase: "<<endl;
    m.erase(2);

    for(auto i:m)
    	cout<<i.first<<" ";
    cout<<endl;


    cout<<"finding 5: "<<endl;
    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++)
    	cout<<(*i).first<<endl;

}