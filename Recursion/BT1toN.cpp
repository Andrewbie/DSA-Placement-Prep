#include <iostream>
using namespace std;

void printNum(int n, int i){
    if(i<1){
        return;
    }
    printNum(n,i-1);
    cout<<i<<endl;
}

int main(){
    printNum(5,5);
}