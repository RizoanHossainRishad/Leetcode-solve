#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        map<int, int> mp;

   
    for (int num : nums) {
        mp[num]++;
    }

    vector<pair<int, int>> vec(mp.begin(), mp.end());

   
    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second; 
    });

   
    int x;
    for (const auto& entry : vec) {
       // cout << entry.first << endl;
       x= entry.first;
       break;
       
    }
        return x;
    }


int main() {
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<singleNumber(nums)<<endl;

    return 0;
}
