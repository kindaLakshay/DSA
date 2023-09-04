#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);


    cout<<"size before pop " <<q.size()<<endl;
    cout<< "First element "<<q.front()<<endl;
    q.pop();
    cout<< "Secondd element "<<q.front()<<endl;
    cout<< "size after pop "<<q.size()<<endl;
    
}