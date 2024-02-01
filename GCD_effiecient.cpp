#include<iostream>
using namespace std;

// int gcd(int a , int b){

//     int res = min(a,b);

//     while(res != 0){
//         if(a%res == 0 && b%res == 0){
//             break;
//         }
//         else{
//             res = res-1;
//         }
//     }
//     return res;
// }
// int gcd(int a , int b){
//     while(a!=b){
//     if(a>b){
//         a = a-b;
//     }
//     else{
//         b = b-a;
//     }
//     }

//     return a;
// }

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){

int a;
cin>>a;
int b;
cin>>b;



cout<<gcd(a,b)<<endl;

    return 0;
}