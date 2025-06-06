class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();//Rows
        int c=matrix[0].size();//Columns
        int i=0,j=r*c-1;

        while(i<=j){
            int mid=i+(j-i)/2;
            if(matrix[mid/c][mid%c]<target){
                i=mid+1;
            }else if(matrix[mid/c][mid%c]>target){
                j=mid-1;
            }else{
                return true;
            }
        }
        return false;
    }
};