#include<iostream>
using namespace std;

bool palindrome(int n ){
    int newno = 0;
    int temp;
    int c = n;
    while(n!=0){
        temp = n%10;
        
        newno = newno*10 + temp;
       
        n = n/10;
    }
    if(c == newno){
        return true;
    }
    return false;
}
int main(){

int n;
cin>>n;

if(palindrome(n)){
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}
    return 0;

}