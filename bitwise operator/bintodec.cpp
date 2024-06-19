#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dec = 0;
    int i = 0;
    while(n!=0){
        if(n%10 == 1){
            dec = dec + pow(2,i);
        }
        // n = n>>1;
        i++;
        n = n/10;
    }

    cout<<dec<<endl;
}