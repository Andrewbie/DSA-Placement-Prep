#include <iostream>
using namespace std;

void printNum(int num, int count = 1){
    if(count==num){
        cout<<num<<endl;
        return;
    }

    cout<<count<<endl;
    count++;
    printNum(num,count);
}

int main(){
    printNum(50);
}