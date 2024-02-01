#include<bits/stdc++.h>
using namespace std;

int sieve(int n){

   vector<bool>isPrime(n+1 , true);
   int cnt = 0;
   for(int i = 2; i*i<=n; i++){

        if(isPrime[i]){
            for(int j = 2*i; j<=n; j = j+i){
                isPrime[j] = false;
            }
        }
   }

   for(int i = 2;i<=n; i++){
    if(isPrime[i]){
       int sqr = i*i;
       
       if(sqr<n){
        cnt = cnt + 1;
       }
    }
   }

   return cnt;

}
 

int main(){


int n;
cin>>n;

cout<<sieve(n);
    return 0;
}