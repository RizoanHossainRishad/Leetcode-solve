#include<bits/stdc++.h>
using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {

  int count=0;
  int gridIndexsize=grid[0].size();
  int minus=0;
  for(int i=0;i<grid.size();i++){
    for(int j=0;j<gridIndexsize;j++){
      
      if(grid[i][j]==1){
        count++;

        if(i>0 && grid[i-1][j]==1){
          minus++;
        } 
        if(j>0 && grid[i][j-1]==1){
          minus++;
        }
      }

    }     
  }
  count=4*count-2*minus;
   return count ;
        
}
int main(){
  
  vector<vector<int>> grid={{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};

    islandPerimeter(grid);
}