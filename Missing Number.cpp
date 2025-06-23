#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int> num={3,0,1};
    //sort(num.begin(),num.end());
    int p= num.size();
    unordered_map<int,int> newMap;
    for(int i=0;i<num.size();i++){
        newMap[i]=0;

    }    
    for(int i=0; i<num.size();i++){
        newMap[num[i]]++;
    }
    for (const auto& pair : newMap) {
        if(pair.second==0)            
            cout<<"Missing value is :"<<pair.first<<endl;
    }

}