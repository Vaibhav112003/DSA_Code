#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

double digit = 0;
for(int i = 2;i<=n; i++){
    digit += log10(i);
    
}

cout<<floor(digit)+1<<endl;

    return 0;
}