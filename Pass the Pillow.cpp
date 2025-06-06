#include<bits/stdc++.h>
using namespace std;

int passThePillow(int n, int time) {
    int time2=0;
   int Output=0;
   
   int count=0;
    
    while(time2!=time){
       if(count==0){ 
        for(int i=1;i<=n;i++){
        if(i!=n)
        time2++;
        Output=i;
        if(time2==time){
            Output+=1;
          break;  
        } 
    }   //cout<<"FIrst loop : "<<time2<<" " <<Output<<endl;
    count++;
       }

        if(time2<time &&count>0){
        for(int j=n;j>1;j--){
            time2++;
            Output=j;

            if(time2==time){
                Output-=1;
            break;
        } 
        }
       // cout<<"Second loop : "<<time2<<" " <<Output<<endl;
    }
        count=0;
        
    }

    return Output;
}
int main(){
    int n,time;
    cin>>n>>time;
    int output=passThePillow(n,time);
    cout<<output<<endl;
    return 0;
}