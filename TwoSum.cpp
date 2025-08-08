#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& bb, int target) {

  int first=0,second=0;
 
  vector<int> result;

    for(int i=0;i<bb.size();i++){

    

        first=bb[i];
        
        for(int j=i+1;j<bb.size();j++)
        { 

         
            second=bb[j];

            if( first+second== target){
            result.push_back(i);
            result.push_back(j);
            return result;
          }
         
        }
      

    }
        
}

int main(){
  
  vector<int> nums={-3,4,3,90};
  int target;
  cin>>target;
  vector<int> twomans=twoSum(nums,target);
  for(auto it:twomans){
      cout<<it<<" ";
    }

}