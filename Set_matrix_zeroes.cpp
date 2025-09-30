#include<bits/stdc++.h>
#include<vector>
using namespace std;
 void setZeroes(vector<vector<int>>& matrix) {
        

        set<int> indices;
        set<int> rowIndices;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                   indices.insert(j);
                   rowIndices.insert(i);
                }              

            }
        }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                    if(rowIndices.find(i) != rowIndices.end() ){
                        matrix[i][j]=0;
                    }
                    if(indices.find(j)!= indices.end()){
                        matrix[i][j]=0;
                    }
            }
        }
       
        /*
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                    cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }*/


}
int main(){   
       vector<vector<int>> matrix= {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
       setZeroes(matrix);

}
 
