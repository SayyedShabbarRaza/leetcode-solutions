class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // if(nums.length()<=1)
            // return nums;
        
            int sum;
        vector<int>runSum(nums.size());
        runSum[0]=nums[0];


    for(int i=1;i<=nums.size()-1;i++){
    runSum[i]=runSum[i-1]+nums[i];
    }
    return runSum;
    }
};