class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        vector<int>maxRamp(n);

        maxRamp[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            maxRamp[i]=max(maxRamp[i+1],nums[i]);
        }
        int i=0,j=0;
        int ramp=0;
        // [6,0,8,2,1,5]
        // [8,8,8,5,5,5]
        while(j<n){
              if(i<j&&nums[i]>maxRamp[j]){
                    i++;
                }
            ramp=max(ramp,j-i);
                j++;
        }        
        return ramp;
    }
};





// class Solution {
// public:
//     int maxWidthRamp(vector<int>& nums) {
//         int n=nums.size();
//         int maxWidth=0;
        

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(i<j&&nums[i]<=nums[j]){
//                     maxWidth=max(maxWidth,j-i);
//                 }
//             }
//         }
//         return maxWidth;
//     }
// };