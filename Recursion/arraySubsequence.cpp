#include <iostream>
#include <vector>
using namespace std;

void printSubseq(vector<int> arr, int index=0, vector<int> temp={}){

    if(index>arr.size()-1){
        for(int i:temp){
            cout<<i<<", ";
        }
        cout<<endl;
        return;
    }

    temp.push_back(arr[index]);
    printSubseq(arr,index+1,temp);
    temp.pop_back();
    printSubseq(arr,index+1,temp);
}

int main(){
    vector<int> arr = {3,1,2};

    printSubseq(arr);
}