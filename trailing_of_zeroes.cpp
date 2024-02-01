#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unsigned long  long ans = 1;  // Use long long to handle larger values

    for (int i = 1; i < n+1; i++) {
        ans *= i;
    }
    int cnt = 0;
    while(ans%10 == 0){
       cnt = cnt + 1;
       ans = ans/10;
    }

    cout<<cnt<<endl;
    return 0;
}
