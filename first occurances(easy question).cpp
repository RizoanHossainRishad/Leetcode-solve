#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    
            int c=haystack.find(needle);
        return c;
    }

int main(){
        string haystack,needle;
        cin>>haystack>>needle;
        //cout<<haystack.size();
        cout<<strStr(haystack,needle);
      // cout<< haystack.find(needle); this is also working how surprising
    }
   


