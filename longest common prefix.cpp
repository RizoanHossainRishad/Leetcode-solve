#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return ""; // Empty vector
    }

    string prefix = strs[0];
    for (const string& s : strs) {
        while (s.find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) {
                return ""; // No common prefix
            }
        }
    }

    return prefix;
}

int main() {
    
    vector<string> strs;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
    string s=longestCommonPrefix(strs); 
    cout<<s;
    return 0;

}
