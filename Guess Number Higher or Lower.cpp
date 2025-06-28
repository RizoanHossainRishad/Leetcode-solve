#include<bits/stdc++.h>
using namespace std;

int pick;
int guess(int num){

    if(num<pick){
      return 1;
    }else if(num>pick){
      return -1;
    }else if(num==pick){
      return 0;
    }

}

 //This is a binary search
int guessNumber(int n) {
      
    int left=1,right=n;
    int mid;
    while(left<=right){
      mid= (left+right)/2;
      if( guess(mid)==0){        
        break;
      }else if(guess(mid)==1){
        left=mid+1;
      }else if(guess(mid)==-1){
        right=mid-1;
      }
    }
    return mid;
        
    }



int main(){
 
  cin>>pick;
  int n;
  cin>>n;
  cout<<guessNumber(n);

}