// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     bool flag = true;

//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             flag = false;
//             break;
//         }
//     }

//     if(flag){
//         cout<<n<<" is a prime no."<<endl;
//     }
//     else{
//         cout<<n<<" is not a prime no."<<endl;

//     }
// }

#include<iostream>
using namespace std;
int main() {
for (int i = 0; i<=15; i+=2){
cout<< i << " ";
if( i&1 ){
continue;
}
i++ ;
}
}