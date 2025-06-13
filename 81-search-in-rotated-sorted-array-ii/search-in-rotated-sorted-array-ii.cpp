class Solution {
public:
int pivot(vector<int>& nums,int n){
    int l=0,r=n-1;
    while(l<r&& nums[l]==nums[l+1]){
        l++;
    }
    while(l<r&& nums[r]==nums[r-1]){
        r--;
    }

    while(l<r){
    int mid=l+(r-l)/2;

            if(nums[mid]>nums[r]){
                l=mid+1;
            }else{
                r=mid;
            }        
    }
    return l; 
}

    bool binarySearch(vector<int>& nums,int target,int l,int r){
        // int res=-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                return true;
            }
           else if(nums[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int n= nums.size();
        int l=0,r=n-1;
        bool ans;

        int intx=pivot(nums,n);

        ans= binarySearch(nums,target,0,intx-1);
       if(ans==false){
        ans= binarySearch(nums,target,intx,n-1);
       }
    return ans;   
    }
};