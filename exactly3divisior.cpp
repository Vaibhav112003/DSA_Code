#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

// for(int i = 0; i<n; i++){
//     if(isPrime(i)){
//         int x = i;
//         while(n%x == 0){
//             cout<<(i)<<" ";
//             x = x*i;

//         }
//     }
// }

    for(int i = 0; i*i<=n;i++){
        while(n%i==0){
            cout<<(i)<<endl;
            n = n/i;
        }
    }

    return 0;
}