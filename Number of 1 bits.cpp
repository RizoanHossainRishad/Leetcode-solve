#include<bits/stdc++.h>
using namespace std;

 int hammingWeight(int n) {
    
    bitset<128> binar(n);
    string p= binar.to_string();
    long t= count(p.begin(),p.end(),'1');
    return t;



}

int main(){
   
   int n;
   cin>>n;
   cout<<hammingWeight(n);

}