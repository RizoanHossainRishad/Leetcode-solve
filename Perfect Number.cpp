#include<bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num) {

  int count=0;
  for(int i=1;i<=num/2;i++){
      if(num%i==0){       
        count+=i;
      }
  }

  if(count==num){
    return true;
  }
        
   return false;

}


int main(){
 int num;
 cin>>num;

 cout<<checkPerfectNumber(num);

}