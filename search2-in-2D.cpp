class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
       int row=0;
       int n=matrix[0].size();
       int col=n-1;
       while(row<m && col>=0){
         if(target==matrix[row][col]){
        return true;
       } 
       else if(target<matrix[row][col]){
                col--;
       }
       else if(target>matrix[row][col]){
                row++;
       }
       }
      
        return false;
    }
};
