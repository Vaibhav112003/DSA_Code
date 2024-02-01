#include<iostream>
using namespace std;

int lcm(int n1 , int n2){

    int res = min(n1,n2);
    while(res!=0){
        if(n1%res == 0 && n2%res == 0){
            break;
        }
        else{
            res = res-1;
        }
    }
   
    int c1 = n1/res;

    int c2 = n2/res;

    int ans = c1*c2*res;
   
    return ans;
    
}

int main(){

int n1 , n2;
cin>>n1>>n2;

cout<<lcm(n1,n2);


    return 0;
}