class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()+1;
        unordered_set s1(nums.begin(),nums.end());
        int found;
            while(n--){
            if(s1.find(n)==s1.end()){
                found= n;
            }
            }
        return found;
    }
};