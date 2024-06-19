#include <iostream>
#include <array>
using namespace std;

void reverseArr(int arr[], int i, int n){
    if (i>(n/2))
    {
        return;
    }

    swap(arr[i], arr[n-i-1]);

    reverseArr(arr,i+1,n);
    
}

int main(){
    int arr[] = {1,2,3,4,5};

    reverseArr(arr,0,5);

    for(int i:arr){
        cout<<i<<", ";
    }

}