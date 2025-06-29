#include<iostream>
#include<map>
using namespace std;

bool canWinNim(int n){
  // if n is a multiple of 4 , I can't win
    if(n%4==0){
      return false;
    }else 
      return true;
}

int main(){
    int n;
    cin>>n;

    cout<<canWinNim(n);
}