#include<bits/stdc++.h>
using namespace std;

 void summaryRanges(vector<int>& nums) {
      vector<string> result;
        //if (nums.empty()) return result;

        int start = nums[0];
        for (int i = 1; i <= nums.size(); ++i) {
            if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1]) {
                    result.push_back(to_string(start));
                } else {
                    result.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                }
                if (i < nums.size()) start = nums[i];
            }
        }
        for(auto it:result){
            cout<<it<<" ";
        }

}
int main(){
   
   vector<int> n;
   int k;
   cin>>k;
   for(int i=0;i<k;i++){
        int x;
        cin>>x;
        n.push_back(x);
   }
   sort(n.begin(),n.end());

   summaryRanges(n);
}