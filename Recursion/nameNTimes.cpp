#include <iostream>
using namespace std;

void printName(string name, int n){
    if (n==0)
    {
        return;
    }
    cout<<name<<endl;
    n--;
    printName(name,n);
    
}

int main(){
    printName("Shanu Aaryan", 5);
}