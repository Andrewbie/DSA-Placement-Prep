#include <iostream>
using namespace std;

void checkPal(string str, int a, int b){
    if (a>b)
    {
        cout<<"string is palindrome"<<endl;
        return;
    }
    if(str.at(a)!=str.at(b)){
        cout<<"string is not palindrome";
        return;
    }
    checkPal(str,a+1,b-1);
}

int main(){
    string str = "a";

    checkPal(str,0,str.length()-1);
}