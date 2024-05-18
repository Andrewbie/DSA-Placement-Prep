// deque : double ended queue

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> a;

    a.push_back(4); //adds element from back

    for(int i:a){
        cout<<i<<endl;
    }

    a.push_front(8); //adds element in front
    for(int i:a){
        cout<<i<<endl;
    }

    //all other operations and functions like vector
}