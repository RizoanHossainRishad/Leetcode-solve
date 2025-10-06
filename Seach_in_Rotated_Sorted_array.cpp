#include<bits/stdc++.h>
#include <limits.h>
#include<algorithm>
using namespace std;

int search(vector<int>& nums, int target) {

  int low=0,hight=nums.size()-1;

  while(low<=hight){

    int mid= (low+hight)/2;

      if(target == nums[mid]){
      return mid;

    }
     if (nums[low] <= nums[mid]) {
      if (nums[low] <= target && target < nums[mid]) {
       hight = mid - 1;
    } else {
      low = mid + 1;
      }
      } else {
      if (nums[mid] < target && target <= nums[hight]) {
      low = mid + 1;
      } else {
      hight= mid - 1;
      }
      }
      }
  
  return -1;
      
}

int main(){
     
     vector<int> nums={4,5,6,7,0,1,2};
     int target=0;

     int c= search(nums,target);
     cout<<c<<endl;

  
}
 
