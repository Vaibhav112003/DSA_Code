#include<bits/stdc++.h>
using namespace std;

vector<int>quadraticRoots(int a, int b, int c) {
   
    long long d = b*b - 4*a*c;
    vector<int> roots;
    
    
    if(d>0){
        double sqroot = sqrt(d);    
        roots.push_back((-b+sqroot)/(2*a));
        roots.push_back((-b+sqroot)/(2*a));
    }
    if(d==0){
       roots.push_back(-b/(2*a));
       roots.push_back(roots[0]);
    }
    if(d<0){
        roots.push_back(-1);
        roots.push_back(-1);
    }
    
    return roots;
    }

int main(){
int a,b,c;

cin>>a>>b>>c;

for (int root : quadraticRoots(a, b, c)) {
    cout << root << " ";
}


}