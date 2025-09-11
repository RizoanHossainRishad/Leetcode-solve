#include<bits/stdc++.h>
using namespace std;

bool detectCapitalUse(string word) {

    if(word.size()==1) return true;
    else if(word.size()==0) return false;
    
    int count=0;

    if ((int)word[0] >= 65 && (int)word[0] <= 90) {
      
      for(char c:word){
        if((int)c>=65 && (int)c<=90){
          count++;
        }
      }
      if(count == word.size()){

        
        return true;
      } 
      else if( count ==1) return true;



    }else{
      for(int i=1;i<word.size();i++){
        
          if((int)word[i]>=65 && (int)word[i]<=90){
            return false;
          }

      }
      return true;
    }
    return false;
}


int main(){
  
  string s;
  cin>>s;
  cout<<detectCapitalUse(s);

}