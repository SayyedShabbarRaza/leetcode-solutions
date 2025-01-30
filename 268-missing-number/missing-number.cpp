class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_set s1(nums.begin(),nums.end());
            for(int i=0;i<=n;i++){
            if(s1.find(i)==s1.end()){
                return i;
            }
            }
        return -1;
    }
};