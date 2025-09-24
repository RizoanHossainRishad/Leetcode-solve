#include<bits/stdc++.h>
#include <limits.h>
#include<algorithm>
#include<string>
using namespace std;

string reverse(string word){
     
     reverse(word.begin(),word.end());
     return word;

}

string reverseWords(string s) {

     if(s.size()==1) return s;
string final="";
string word="";
     for(int i=0;i<s.size();i++){
          if(s[i]!=' ') word+=s[i];
          if(s[i]==' ' || i== s.size()-1){ 
               word=reverse(word);
               final+=word;
               if(i!=s.size()-1)final+=' ';
               word="";

          }


     }
     //cout<<s.size()<<" "<<final.size()<<endl;
     //cout<<final<<endl;

     return final;
}
int main(){
     
   string s;
     s="Let's take LeetCode contest";
   string reversed=reverseWords(s);

  
}
 
