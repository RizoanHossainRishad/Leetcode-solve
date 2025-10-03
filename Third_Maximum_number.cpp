#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int thirdMax(vector<int>& nums) {
    

    set<int> sorted;
    sort(nums.begin(),nums.end(),greater<int>());

    for(int i=0;i<nums.size();i++){        
        sorted.insert(nums[i]);
        if(sorted.size()==3){
            break;
        }
    }

  

    int index=0;

    if(sorted.size()==3){
        index=0;
        auto it = next(sorted.begin(), index);
         return *it;
    }else{
        index=sorted.size()-1;
        auto it = next(sorted.begin(), index);
        return *it;
    }


}

int main(){   
    
   vector<int> nums={1,2,2,5,3,5};
   cout<<thirdMax(nums)<<endl;
}
 
