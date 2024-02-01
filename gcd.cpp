#include<bits/stdc++.h>
using namespace std;

int gcd(int n1 , int n2){

    int res = min(n1 , n2);

    while(res != 0){
        if(n1%res == 0 && n2%res == 0){
            break;
        }
        else{
            res = res-1;
        }
    }
    return res;
}

int main(){

int n1,n2;
cin>>n1>>n2;

cout<<gcd(n1, n2)<<endl;

    return 0;

}