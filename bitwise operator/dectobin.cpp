#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = n;
    int bin = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1;
        bin = bit * pow(10,i) + bin;

        n = n>>1;
        i++;
    }

    cout<<"the binary representation of "<< temp << " is " << bin << endl;
}