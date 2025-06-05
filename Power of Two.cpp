#include<iostream>
#include<math.h>
#include <typeinfo>
using namespace std;

bool isPowerofTwo(int n){
     if(n>0){  
    int x= log(n)/log(2);
    if(pow(2,x)==n && n!=0){
        return true;
    }else{
        return false;
    }}else return false;      
} 
int main(){
    
  int n;
  cin>>n;
  cout<<isPowerofTwo(n);
}