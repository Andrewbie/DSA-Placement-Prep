#include <iostream>
#include <vector>
using namespace std;
int printSubseqSum(vector<int> arr,int k,/*vector<int> temp = {},*/ int ind=0, int sum = 0){

    if(ind>arr.size()){
        if(sum==k){
            // for(int i:temp){
            //     cout<<i<<", ";
            // }
            // cout<<endl;
            return 1;
        }
        return 0;
    }
    
    // temp.push_back(arr[ind]);
    sum = sum+arr[ind];
    int l = printSubseqSum(arr,k,/*temp, */ind+1,sum);
    // temp.pop_back();
    sum = sum-arr[ind];
    int r = printSubseqSum(arr,k,/*temp,*/ind+1,sum);

    return l+r;
}

int main(){
    vector<int> arr = {1,2,1};
    cout<<printSubseqSum(arr,2);
}