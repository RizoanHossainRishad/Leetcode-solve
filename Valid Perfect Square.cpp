#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {


    if(num>0){

        double n=log(num)/2;
        n=exp(n);
        long n2 = round(exp(log(num) / 2));
       if((n2*n2)==num){
        return true;
       }else return false;

    
    }

        return false;
    
     

 
    
}
int main(){
  
   int n;
   cin>>n;
   cout<<isPerfectSquare(n);

}