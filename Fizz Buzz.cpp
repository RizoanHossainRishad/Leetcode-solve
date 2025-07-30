#include<bits/stdc++.h>
using namespace std;

void fizzBuzz(int n) {
    vector<string> fizzes;
    for(int i=1;i<=n;i++){
        if(i%3 ==0 && i%5==0){
            fizzes.push_back("FizzBuzz");
        }else if(i%3==0){
            fizzes.push_back("Fizz");
        }else if(i%5==0){
            fizzes.push_back("Buzz");
        }else{
            fizzes.push_back(to_string(i));
        }
    }
    for(auto it:fizzes){
        cout<<it<<" ";
    }

}

int main(){
  
    int n;
    cin>>n;
    fizzBuzz(n);

}