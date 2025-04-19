class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long n=nums.size();
        sort(nums.begin(),nums.end());
        long long l=0;
        long long r=0;
        long long total=0;
        long long result=0;

        while(r<n){
            total+=nums[r];
            while(nums[r]*(r-l+1)>total+k){
                total-=nums[l];
                l++;
            }
            result= max(result,r-l+1);
            r++;
        }    

    return result;
    }
};