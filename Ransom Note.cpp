#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

 bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> mag;
        
        for(int i=0;i<magazine.size();i++){
          mag[magazine[i]]++;
        }
        int size=ransomNote.size();
        
        for(int i=0;i<ransomNote.size();i++){
          auto it= mag.find(ransomNote[i]);
          
          if(it!=mag.end() && (*it).second>0){
            mag[ransomNote[i]]--;
            size--;
          }else{
            return false;
          }
        }
       
        if(size==0){
          return true;

        }
        return false;

    }

int main(){
    string ransomNote,magazine;
    cin>>ransomNote>>magazine;
    cout<<canConstruct(ransomNote,magazine);
}