#include<bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern,string  s){

  vector<string> vec;
  string p="";
   for (int i=0;i<s.size();i++) {
        if (s[i] == ' '){
            vec.push_back(p);
            p="";
        }else            
        p +=(char)s[i];
        if(i== s.size()-1){
          vec.push_back(p);
        }
    }

    if(vec.size()!= pattern.size()){
      return false;
    }
    unordered_map<char,string> letter;
    unordered_map<string,char> word;

    for (int i = 0; i < pattern.size(); ++i) {
            char key = pattern[i];
            string value = vec[i];
            if (!letter.count(key)) letter[key] = value;
            else if (letter[key] != value) return false;
            if ( !word.count(value) ) word[value] = key;
            else if (word[value] != key) return false;
        }
        return true;
    
   
    


}

int main(){
   string pattern,s;
   cin>>pattern;
   s="dog cat cat fish";
   cout<<pattern<<" "<<s<<endl;
    cout<<wordPattern(pattern,s);
}