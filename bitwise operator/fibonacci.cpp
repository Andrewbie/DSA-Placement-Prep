#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a =0, b=1;

    cout<<a<<", "<<b<<", ";

    for (int i = 3; i <= n; i++)
    {
        int nextfib = a+b;
        cout<<nextfib<<", ";
        a = b;
        b = nextfib;
    }
    
}