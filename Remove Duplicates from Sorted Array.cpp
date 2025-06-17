#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
      
       
        set<int> s;
        for(auto it:nums){
            s.insert(it);
        }
            
         int k=s.size();
         auto it=s.begin();
         nums.clear();
        for(int i=0;i<k;i++){

            nums.push_back(*it);
            it++;

        }

        
        
        return k;
    }
int main() {

            vector<int> nums;
        int arr[]={0,0,1,1,1,2,2,3,3,4};
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            nums.push_back(arr[i]);
        }

    
        int k=removeDuplicates(nums);
        cout<<k<<endl;
       for(auto it:nums){
        cout<<it<<" ";
       }
}
