#include <iostream>
#include <vector>
using namespace std;

int missingNo(vector<int> &arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = (s+e)/2;

    int ans = -1;

    while(s<=e){
        if(arr[mid]-mid==1){
            s=mid+1;
        }
        else{
            ans = mid;
            e=mid-1;
        }

        mid = (s+e)/2;
    }

    return ans+1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = missingNo(arr);
    if(n==0){
        cout<<"There is no missing no."<<endl;
    }
    else{
        cout<<"The missing no. is "<<n;
    }
}