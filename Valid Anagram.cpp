#include<iostream>
#include<map>
using namespace std;
bool isAnagram(string s, string t) {
      

     map<char,int> smap,tmap; 
    for(int i=0;i<s.size();i++){
        smap[s[i]]++;
    }
    for(int i=0;i<t.size();i++){
        tmap[t[i]]++;
    }

   return (smap==tmap);


}
int main(){
    string s,t;
    cin>>s>>t;
    isAnagram(s,t);
}