    #include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;

    s.insert(2);
    s.insert(5);
    s.insert(2);
    s.insert(9);
    s.insert(8);
    s.insert(5);

    for(auto i:s){
    	cout<<i<<" ";
    }cout<<endl;


    // cout<<s.begin();
    set<int>::iterator it = s.begin();
    // it++;

    s.erase(it);

    for(auto i:s)
    	cout<<i<<" ";
    cout<<endl;
    cout<<"2 is present or not: "<<s.count(2)<<endl;
    cout<<"5 is present or not: "<<s.count(5)<<endl;
    cout<<"-5 is present or not: "<<s.count(-5)<<endl;
    

    // ye wala samaj ni aaya
    set<int>::iterator itr = s.find(5);
    cout<<"value present at itr: "<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++)
    	cout<<*it<<" ";
    cout<<endl;
}