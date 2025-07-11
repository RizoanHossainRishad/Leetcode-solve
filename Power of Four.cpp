#include<iostream>
#include<math.h>
using namespace std;

bool isPowerOfFour(int n) {
    
    if(n==0) return false;
    double x= log(n)/log(4);
    if(floor(x)==x)
    return true;
    
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<isPowerOfFour(n);
}