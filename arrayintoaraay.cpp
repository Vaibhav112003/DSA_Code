#include<iostream>
using namespace std;
 
int main(){

int arr[100];

for(int i = 0; i<10; i++){
    for(int j = 0; j<2; j++){
        cin>>arr[i];
    }
}
for(int i = 0; i<10; i++){
    for(int j = 0; j<2; j++){
        cout<<arr[i];
    }
}
    return 0;
}