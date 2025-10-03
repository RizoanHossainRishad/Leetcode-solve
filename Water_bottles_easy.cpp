#include<bits/stdc++.h>
#include<vector>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
        
    if (numBottles==0){
        return 0;
    }

    int ans=0;
    ans+=numBottles;
    
    while(numBottles>=numExchange){

        numBottles=numBottles-numExchange+1;
        
        ans++;
        //cout<<numBottles<<" "<<ans<<endl;

    }

    
    return ans;
    

    

}

int main(){   
     
     int numBottles;
     cin>>numBottles;
     int numExchange;
     cin>>numExchange;

     cout<<numWaterBottles(numBottles,numExchange);

}
 
