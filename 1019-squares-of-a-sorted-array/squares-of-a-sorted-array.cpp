class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>sortedArray(nums.size());

        for(int i=0;i<nums.size();i++){
            sortedArray[i]=nums[i]*nums[i];
        }
        //Sort
        int temp=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(sortedArray[j]>sortedArray[j+1]){
                    temp=sortedArray[j];
                    sortedArray[j]=sortedArray[j+1];
                    sortedArray[j+1]=temp;
                }
            }
        }
        return sortedArray;
    }
};