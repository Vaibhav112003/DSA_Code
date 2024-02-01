#include<iostream>
using namespace std;

int evenlydivide(int n){
int ans = 0;
int cnt = 0;
int c = n;
while(n>0){
    ans = c%10;
    if(n%ans == 0){
        cnt = cnt + 1;

    }
    c = c/10;
}
return cnt;
}

int main(){


int n;
cin>>n;

cout<<evenlydivide(n);
    return 0;

}