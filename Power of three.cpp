#include<iostream>
#include<cmath>
using namespace std;
bool isPowerofThree(int n){
     if(n==0) return false;
   double var=log(n)/log(3);
   var=ceil(var);
   var= pow(3,var);
   
   if(var== (double)n ){
    return true;
   }else return false;
}
int main(){
   
   int n;
   cin>>n;
   cout<<isPowerofThree(n)<<endl;



}