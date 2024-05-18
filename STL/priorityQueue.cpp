#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> maxi;

    maxi.push(4);
    maxi.push(6);
    maxi.push(1);
    maxi.push(10);

    int n = maxi.size();

    // for(int i=0; i<n; i++){
    //     cout<<maxi.top()<<endl;
    //     maxi.pop();
    // }


    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(5);
    mini.push(7);
    mini.push(1);
    mini.push(10);

    for(int i=0; i<n; i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }
}