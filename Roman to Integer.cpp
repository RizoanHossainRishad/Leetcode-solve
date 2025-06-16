#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s1) {
        map<char,int> s;
        s['I']= 1;
        s['V']= 5;
        s['X']= 10;
        s['L']= 50;
        s['C']= 100;
        s['D']= 500;
        s['M']= 1000;
        int sum=0;
int count=0;
        for(int i=0;i< s1.length();i++){
            //cout<< i<<" "<<endl;
            char frst=s1[0];
            char c= s1[i];
            char c2= s1[i+1];
            auto it= s.find(c);
            auto it2=s.find(c2);                      
            if(it->first == frst && it->second>9 &&count==0 && it->second >it2->second){
               // cout<<sum+it->second<<endl;
                sum+=it->second;
                count++;
            }else if(it->second <it2->second && it->first!= s[0]){                
                sum+= (it2->second-it->second);
                //cout<<it2->second<<"-"<<it->second<<"="<<sum<<endl;
                i++;
            }else{
                sum+=it->second;
            }
        }
       cout<<sum;
        return sum;
    }


int main(){

   string s;
   cin>>s;
   romanToInt(s);
    

}