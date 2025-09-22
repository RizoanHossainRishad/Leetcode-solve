#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int findLUSlength(string a, string b){

    int count=0;

    if(a.size()==0){
        return b.size();
    }else if( b.size()==0){
        return a.size();
    }

    int bInd=0;
    int flag=0;
    if(a==b) return -1;
    if(a!=b){
        if(a.size()>b.size()){
            return a.size();
        }else{
            return b.size();
        }
    }

    return -1;

}


int main(){   
    
  string a,b;
  cin>>a>>b;

  int c= findLUSlength(a,b);
  cout<<c<<endl;
}
 
