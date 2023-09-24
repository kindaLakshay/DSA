#include <bits/stdc++.h>
using namespace std;

void print(int *p){
    cout << *p <<endl;
}

void update(int *p){
    *p = *p + 1;
}

int main(){
    int value = 5;
    int *p = &value;

    cout<<"before: "<< *p << endl;
    update(p);
     
    print(p);
}





