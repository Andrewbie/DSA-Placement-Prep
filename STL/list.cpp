//it is a doubly linked list.

#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;

    list<int> a(l); // can copy list
    l.push_back(4);

    l.push_front(5);

    for(int i:l){
        cout<<i<<endl;
    }
}