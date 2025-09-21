#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
        
 vector<int> even;
 vector<int> odd;

 if(nums.size()==1) return nums;
 if(nums.size()==0) return {};

 for(int i=0;i<nums.size();i++){

    if(nums[i]%2==0){
      even.push_back(nums[i]);
    }else{
      odd.push_back(nums[i]);
    }
 }

  even.reserve(even.size()+odd.size());
  move(odd.begin(),odd.end(),back_inserter(even));

  return even;

}
  
int main(){
    vector<int> nums={3,1,2,4};
      vector<int> s=sortArrayByParity(nums);
}