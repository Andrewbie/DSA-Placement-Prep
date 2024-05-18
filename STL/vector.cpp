#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> a;

    vector<int> b(4,1); // 4 is size of vector and 1 is initialization of element

    vector<int> c(a); //to copy a vector to another vector

    cout<<"size of vector "<<a.size()<<endl;
    cout<<"capacity of vector "<<a.capacity()<<endl;

    a.push_back(4);
    cout<<"capacity of vector "<<a.capacity()<<endl;
    a.push_back(5);
    cout<<"capacity of vector "<<a.capacity()<<endl;
    a.push_back(8);  //always doubles its capacity when its full and elements are pushed or added
    cout<<"capacity of vector "<<a.capacity()<<endl;

    // can perform normal array operations

    cout<<"element at 3 "<<a.at(2)<<endl; //to access an index element

    cout<<"element at front "<<a.front()<<endl; //to access element at front

    cout<<"element at end "<< a.back()<<endl; // to access element at end

    a.pop_back(); //pops the element from end
}