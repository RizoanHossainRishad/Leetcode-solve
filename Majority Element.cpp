#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    //Only copy this path
    float n=nums.size();
    
    n=ceil(n/2);
    
    unordered_map<int, int> counts;
    for (int val : nums) {
    counts[val]++;
    }
    for (auto& pair : counts) {
    
    if(pair.second >=n){
        return pair.first;
    }
}

}
int main(){
    vector<int> num;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        num.push_back(temp);
    } 
    //cout<<endl;
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

    //cout<<num.size()<<endl;

    cout<<"Majority Element is : "<<majorityElement(num)<<endl;


}