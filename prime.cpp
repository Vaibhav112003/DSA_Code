#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i = 2; i<n; i++){
      
      if(n%i == 0){
        cout<<"it is  not a prime"<<endl;
      }
      
}
cout<<"it is prime"<<endl;
    return 0;

}