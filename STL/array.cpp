#include <iostream>
#include <array>
using namespace std;

int main(){

    int arr[] = {1,2,3,4};
    array<int,5> arr2 = {1,2,3,4,5};

    int l = arr2.size();

    for (int i = 0; i < l; i++)
    {
        cout<<arr2[i]<<endl;
    }

    cout<<"array at 2nd index"<<arr2.at(2)<<endl;

    cout<<"array is empty? "<<arr2.empty()<<endl;

    cout<<"first element "<<arr2.front()<<endl;

    cout<<"last element "<<arr2.back()<<endl;
    return 0;
}