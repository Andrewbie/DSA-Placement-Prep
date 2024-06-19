#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=4;

    // 5   = 101
    // 4   = 100
    // 5$4 = 100 = 4
    cout<<"And operation a&b "<< (a&b) << endl;

    // 5   = 101
    // 4   = 100
    // 5|4 = 101 = 5
    cout<<"Or operation a|b "<< (a|b) << endl;

    // 5 = 00000.......101
    // ~a converts 0 to 1 and 1 to 0
    // = [1]1111......010    front bit 1 means negative
    // 1's compliment
    // = 00000......101
    // 2's compliment
    // = 0000......101
    //              +1
    // = 0000......110 = 6
    // so -6
    cout<<"not operation ~a "<< ~a << endl;

    // 5 = 101
    // 4 = 100
    //     001
    cout<<"XOR operation a^b "<< (a^b) << endl;

    cout<<"17 >> 1 "<< (17>>1)<<endl;
    cout<<"17 >> 2 "<< (17>>2)<<endl;
    cout<<"19 << 1 "<< (19<<1)<<endl;
    cout<<"21 << 2 "<< (21<<2)<<endl;

}