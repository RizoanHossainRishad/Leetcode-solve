#include<bits/stdc++.h>
#include <limits.h>
#include<algorithm>
using namespace std;

int trap(vector<int>& height) {
    

  int he=height.size();
  vector<int> leftMax(he); 
  vector<int> rightMax(he);

  rightMax[he-1]=height[he-1];
  leftMax[0] = height[0];

  
  for(int i=he-2;i>=0;i--){
    rightMax[i]= max(rightMax[i+1],height[i+1]);  
    //cout<<rightMax[i]<<", ";
  }
  //cout<<rightMax[he-1]<<endl;

  int water=0;
  //cout<<leftMax[0]<<", ";
  for(int i=1;i<he;i++){
    leftMax[i] = max(leftMax[i-1],height[i-1]);
    //cout<<leftMax[0]<<", ";
    int vally= (min(leftMax[i],rightMax[i]))-height[i];
    if(vally>0){
      water+=vally;
    }
  }
  
 /* for(int i=0;i<he;i++){
    int vally= (min(leftMax[i],rightMax[i]))-height[i];
    if(vally>0){
      water+=vally;
    }
  }*/
  
  
  return water;
  
}

int main(){
     
     vector<int> height={4,2,3};

    cout<<trap(height);
}
 
