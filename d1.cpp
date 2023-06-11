#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
     int m=matrix.size();  int n=matrix[0].size();
     bool firstrow0=false;
     bool firstcol0=false;
        
       for(int j=0;j<n;++j){
        if(matrix[0][j]==0){
           firstrow0=true;
           break;
        } 
       } 
        for(int i=0;i<m;++i){
        if(matrix[i][0]==0){
           firstcol0=true;
           break;
        }
       } 
     for(int i=1;i<m;++i){
      for(int j=1;j<n;++j){
       if(matrix[i][j]==0){
         matrix[0][j]=0;
          matrix[i][0]=0;
       } 
      }
     }
       for(int i=1;i<m;++i){
      for(int j=1;j<n;++j){
       if(matrix[0][j]==0 ||matrix[i][0]==0){
         matrix[i][j]=0; 
       }  
      }
     } 
      if(firstrow0){
         for(int j=0;j<n;++j) 
           matrix[0][j]=0;  
      }  
         if(firstcol0){
         for(int i=0;i<m;++i) 
           matrix[i][0]=0;  
      }  
    }
};


int main(){

int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
        cout<<endl;
    }

    Solution obj;
    obj.setZeroes(matrix);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}
  return 0;
}