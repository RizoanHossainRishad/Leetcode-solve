#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
      
  int maxx=INT_MIN;
  int curr=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i]==1){
      curr++;
    }

    if(nums[i]!=1 || i== nums.size()-1){
      maxx=max(maxx,curr);
      curr=0;
    }

  }

  
  return maxx;
}

int main(){
  vector<int> nums={1,0,1,1,0,1};
  findMaxConsecutiveOnes(nums);

}