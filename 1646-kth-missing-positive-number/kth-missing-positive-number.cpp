class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=n-1;
        int mid=-1;

        while(l<=r){
            mid=l+(r-l)/2;
            int left_missing=nums[mid]-(mid+1);
            if(left_missing<k){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return l+k;
    }
};



// int n=nums.size();
//         int num=1;
//         int i=0;
//         while(i<n&&k>0){
//         if(num==nums[i]){
//             i++;
//         }else{
//             k--;
//         }     
//         num++;   
//         }

//         while(k--){
//             num++;
//         }

//         return num-1;