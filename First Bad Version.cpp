#include<bits/stdc++.h>
using namespace std;

bool isBadVersion(int version){
        // this function is implemented in the leet code;
}

int firstBadVersion(int n) {
    
    if(isBadVersion(n)){
        n--;
        return firstBadVersion(n);
    }else return n+1;
}

int main(){
  
    int n;
    cin>>n;
    firstBadVersion(n);

}