#include<bits/stdc++.h>
using namespace std;

bool func1(vector<int>& nums,int k){
  
    std::unordered_set<int> seen;
    for (int i = 0; i < nums.size(); i++) {
        if (i > k) {
            seen.erase(nums[i - k - 1]);  // Remove the element that is out of the range
        }
        if (seen.find(nums[i]) != seen.end()) {
            return true;
        }
        seen.insert(nums[i]);
    }
    return false;
}      
int main(){
    
   vector<int> nums;
   int n;
   cin>>n;

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    nums.push_back(x);    
   }
   int k=1;
    //cout<<abs(1-3)<<endl;
   cout<<func1(nums,k)<<endl;
}