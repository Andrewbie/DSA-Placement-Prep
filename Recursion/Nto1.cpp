#include <iostream>
using namespace std;

void printNum(int num){
    if(num==1){
        cout<<1<<endl;
        return;
    }
    cout<<num<<endl;
    printNum(num-1);
}

int main(){
    printNum(50);
}