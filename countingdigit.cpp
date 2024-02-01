#include<bits/stdc++.h>
using namespace std;

int countdigit(int n){
  
  if (n < 0) return 0; // Handle negative input
  if (n == 0) return 1; // Factorial of 0 is 1

  int trailingZeros = 0;
  for (int i = 5; i <= n; i *= 5) {
    trailingZeros += n / i;
  }

  double log10Factorial = 0;
  for (int i = 2; i <= n; i++) {
    log10Factorial += log10(i);
  }

  int digits = floor(log10Factorial) + 1 + trailingZeros;
  return digits;
}



int main(){

int n;
cin>>n;

cout<<countdigit(n);

  return 0;
}
