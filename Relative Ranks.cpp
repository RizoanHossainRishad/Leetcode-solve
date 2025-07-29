#include<bits/stdc++.h>

using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
  
  vector<int> sorted = score;
    sort(sorted.begin(), sorted.end(), greater<>());

    unordered_map<int, string> rankMap;
    for (int i = 0; i < sorted.size(); ++i) {
        if (i == 0)
            rankMap[sorted[i]] = "Gold Medal";
        else if (i == 1)
            rankMap[sorted[i]] = "Silver Medal";
        else if (i == 2)
            rankMap[sorted[i]] = "Bronze Medal";
        else
            rankMap[sorted[i]] = to_string(i + 1);
    }

    vector<string> result;
    result.reserve(score.size());
    for (int num : score)
        result.push_back(rankMap[num]);

    return result;
        
}
int main(){
  
  vector<int> score={10,3,8,9,4};
  vector<string> s=findRelativeRanks(score);
  
  

}