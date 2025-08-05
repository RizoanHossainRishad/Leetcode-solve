#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int left = 0, right = 0;
        vector<int> res;
        while(left< nums1.size() && right < nums2.size()){
            if(nums1[left] == nums2[right]){
                res.push_back(nums1[left]);
                left++;
                right++;
            }
            else if(nums1[left] < nums2[right]){
                left++;
            }
            else if(nums1[left] > nums2[right]){
                right++;
            }
        }
        return res;
    }


int main(){
  
    vector<int> nums1={1,2,2,1};
    vector<int> nums2={2,2};
    vector<int> pookie=intersect(nums1,nums2);
    for(auto it:pookie){
        cout<<it<<" ";
    }

}