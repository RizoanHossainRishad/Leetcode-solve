#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    vector<int> num2nd;
    vector<int> count;
    for(auto &it:nums){
        if(it==0){
            count.push_back(0);
        }else{            
            num2nd.push_back(it);
        }

    }
    nums.clear();
    nums.insert(nums.end(),num2nd.begin(),num2nd.end());
    nums.insert(nums.end(),count.begin(),count.end());
    for(auto&it:nums){
        cout<<it<<" ";
    }

    
}
int main(){
    vector<int> nums={0,1,0,3,12};
   
    moveZeroes(nums);

}