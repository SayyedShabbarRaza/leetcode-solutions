class Solution {
    //14 min came up with brute force idea but and found the actuall issue resisting effecient solution.
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int r=0,l=0;
        int length=INT_MAX;
       int currentSum=0;
        while(r<n){
            currentSum+=nums[r];
            while(currentSum>=target){
            length=min(length,r-l+1);
                currentSum-=nums[l];
                l++;
            }
            r++;
        }
        return length==INT_MAX?0:length;
    }
};




// class Solution {
//     //33 min came up with brute force idea (mistake:not reseting currentSum everytime in brute force) but didn't found the actuall issue resisting sliding window.
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int n=nums.size();
//         int currentSum=0;
//         int length=INT_MAX;
//         for(int i=0;i<n;i++){
//             currentSum=0; (first not doing it)
//             for(int j=i;j<n;j++){
//             currentSum+=nums[j];
//                 if(currentSum>=target){
//                     length=min(length,j-i+1);
//                 }
//             }
//         }
//         return length==INT_MAX?0:length;
//     }
// };