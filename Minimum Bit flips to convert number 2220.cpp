#include<bits/stdc++.h>
#include<bitset>
using namespace std;

int minBitFlips(int start, int goal) {
        bitset<32> binary(start);
        bitset<32> binary2(goal);
   int count=0;
        for(int i=0;i<32;i++){
         if(binary[i]!=binary2[i]){
            count++;
         }
            }
        return count;
    }

int main(){
  
   int x,y;
   cin>>x>>y;
   cout<<hammingDistance(x,y);

}