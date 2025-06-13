#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    
    int left=0,right=s.size()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    for(auto &it:s){
        cout<<it<<" ";
    }

}

int main(){
 int n;
 cin>>n;
 vector<char> s;
 for(int i=0;i<n;i++){
    char c;
    cin>>c;
    s.push_back(c);
 }
 reverseString(s);

}