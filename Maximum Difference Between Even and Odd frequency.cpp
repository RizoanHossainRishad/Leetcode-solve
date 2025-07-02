#include<iostream>
#include<unordered_map>
using namespace std;

int maxDifference(string s) {
    
    unordered_map<char,int> freq;
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    int odd=0,even=9999999;
    for(auto &it:freq){
        if(it.second%2!=0 && it.second>odd){
            odd=it.second;
        }
        if(it.second%2==0 && it.second<even){
            even=it.second;
        }
    }
    return odd-even;

}

int main(){
   string s;
   cin>>s;
   cout<<maxDifference(s);

}