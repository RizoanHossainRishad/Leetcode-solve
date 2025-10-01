#include<bits/stdc++.h>
using namespace std;


vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
   
     vector<int> ans;
    
     
     int n=nums.size();
     
     for(int i=0, j=0; i<n; i++){// pointers i, j
    if (nums[i]==key){
        int up=min(n-1, i+k); 
        for( j=max(j, i-k); j<=up; j++)
            ans.push_back(j);// add j to ans
    } 
      }

      for(auto &it:ans){
         cout<<it<<" ";
      }
      return ans;     
   }
    




int main(){
   
   vector<int> nums={3,4,9,1,3,9,5};
   vector<int> js=findKDistantIndices(nums,9,1);

}