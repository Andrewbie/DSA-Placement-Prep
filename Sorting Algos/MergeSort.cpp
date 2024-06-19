#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int l, int mid, int high){
    int left = l, right = mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
            right++;
    }

    for(int i=l;i<=high;i++){
        arr[i]=temp[i-l];
    }
}

void mergeSort(vector<int> &arr,int low, int high){
    if(low==high){
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


int main(){
    vector<int> arr = {2,6,4,7,1,5,8};
    mergeSort(arr,0,arr.size()-1);

    for(int i:arr){
        cout<<i<<", ";
    }
}