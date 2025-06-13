class Solution {
public:
    bool search(vector<vector<int>>& matrix, int target,int row){
        int si=0;
        int n=matrix[0].size();
        int ei=n-1;
        while(si<=ei){
            int mid=si+(ei-si)/2;
            if(target==matrix[row][mid]){
                return true;
            }
            else if(target>matrix[row][mid]){
                si=mid+1;
            }
            else{
                ei=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int sr=0;
        int er=m-1;
        while(sr<=er){
            int midr=sr+(er-sr)/2;
            if(target>= matrix[midr][0] && target<=matrix[midr][n-1]){
                return search(matrix,target,midr);
            }
            else if(target>matrix[midr][n-1]){
                sr=midr+1;
            }
            else{
                er=midr-1;
            }
        }
        return false;
    }
};
