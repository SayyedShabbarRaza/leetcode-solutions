class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>ans(n1);
        for(int i=0;i<n1;i++){            
                int foundedIndex=-1;
            for(int j=0;j<n2;j++){
                if(nums2[j]==nums1[i]){
                    foundedIndex=j;
                    break;
                }                
            }
            int nextGreater=-1;
            if(foundedIndex!=-1){
                    for(int k=foundedIndex+1;k<n2;k++){
                        if(nums2[k]>nums1[i]){
                           nextGreater= nums2[k];
                            break;
                        }
                    }
                }
                ans[i]=nextGreater;
        }
        return ans;
    }
};