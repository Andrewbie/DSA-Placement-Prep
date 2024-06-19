#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int fQuick(vector<int> &arr,int low, int high){
    int pivot = low;
    int i = low;
    int j = high;

    while(i<j){
        while (arr[i]<=arr[pivot] && i<=high)
        {
            i++;
        }
        while (arr[j]>arr[pivot] && j>=low)
        {
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
        
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int partition = fQuick(arr,low,high);
        quickSort(arr,low,partition-1);
        quickSort(arr,partition+1,high);
    }
}

int main(){
    vector<int> arr = {5,1,2,6,7,1,2,4,5,9};
    quickSort(arr,0,arr.size()-1);

    for(int i:arr){
        cout<<i<<", ";
    }
}