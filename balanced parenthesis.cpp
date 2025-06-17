#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        unordered_map<char,int> symbols= {{']',1},{'[',-1},{'}',3},{'{',-3},{')',2},{'(',-2}};
        stack<char> st;
        for(char bracket:s){
            if(symbols[bracket]<0){
                st.push(bracket);
            }else{
                if(st.empty()){
                    return false;
                }
                char top=st.top();
                st.pop();
                if(symbols[top]+symbols[bracket]!=0)
                return false;
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
int main(){
    string test;
    cin>>test;
    int f=isValid(test);
    if (!f)
    cout<<"FALSE"<<endl;
    else
        cout<<"TRUE"<<endl;
    }



